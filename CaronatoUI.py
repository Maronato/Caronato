#!/usr/bin/env python
# -*- coding: utf-8 -*-
import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk
import os.path
import re
from facebook import GraphAPI
import datetime
from unidecode import unidecode
import math

print("Dependências carregadas")

'''     Consideracões

Pesquisar ao apertar enter

Debugar as travadas: acho que são no fetch do facebook. Verificar se é problema no meu código ou na api.
Experimentar timeouts para sair do bug

'''

version = 0.85


abrev_cidades = {'Sao Paulo': {'SP ', ' sampa '},
           'Sao Carlos': {' SC ', ' sanca '}}


class Handler(Gtk.Window):
    def __init__(self):
        print("Carregando configuracões iniciais")
        self.builder = Gtk.Builder()
        lista.clear()

        #   Pre-set variables
        global tipo
        tipo = 'ofereco'
        global hora1
        hora1 = '00:00'
        global hora2
        hora2 = '23:59'
        global preco
        preco = '00'
        global date
        date = datetime.datetime.now()
        date = "%d %d %d" % (date.year, date.month, date.day)
        global token
        token = ''

        print("Fazendo leitura inicial da base de token")
        config_read()

    # Funcões de Handler
    #   Termina o programa
    def on_delete_window(*args):
        print("Terminando programa")
        Gtk.main_quit(*args)

    #   Pega o clique do botão
    def pesquisar(self, find_b):
        Gtk.Statusbar.push(status, 0, '')
        if token_validity:
            lista.clear()
            filtrar_tipo()
        elif token is "":
            config_read()
        else:
            test_token()

    # Pega o dia
    def on_cal_day_selected(self, cal):
        global date
        temp = Gtk.Calendar.get_date(cal)
        temp = "%d %d %d" % (temp[0], temp[1] + 1, temp[2])
        if check_time_validity(hora1, hora2, temp):
            date = temp
            print(date)

    # Pega o texto do comboboxtext saindo
    def on_saindo_changed(self, combo):
        global saindo
        tree_iter = combo.get_active_iter()
        if tree_iter is not None:
            model = combo.get_model()
            saindo = unidecode(model[tree_iter][0])
        else:
            entry = combo.get_child()
            saindo = unidecode(entry.get_text())
        print("saindo: " + saindo)

    #   Pega o texto do comboboxtext indo
    def on_indo_changed(self, combo):
        global indo
        tree_iter = combo.get_active_iter()
        if tree_iter is not None:
            model = combo.get_model()
            indo = unidecode(model[tree_iter][0])
        else:
            entry = combo.get_child()
            indo = unidecode(entry.get_text())
        print("indo: " + indo)

    #   Pega o texto do comboboxtext tipo
    def on_tipo_changed(self, combo):
        tree_iter = combo.get_active_iter()
        model = combo.get_model()
        global tipo
        tipo = model[tree_iter][0]
        print(tipo)

    #   Pega o texto do token_entry
    def on_token_entry_changed(self, entry):
        global token
        global token_validity
        token = entry.get_text()
        # Gtk.Statusbar.push(status, 0, 'Token Inválido. Entre outro')
        print(token)
        token_validity = 0

    #   Pega o texto de hora1
    def on_hora1_changed(self, hora):
        global hora1
        temp = hora.get_text()
        r = re.compile('[0-9]?[0-9]:[0-9]?[0-9]')
        if r.match(temp) and check_time_validity(temp, hora2, date):
            hora1 = temp
            print(hora1)

    # Pega o texto de hora2
    def on_hora2_changed(self, hora):
        global hora2
        temp = hora.get_text()
        r = re.compile('[0-9]?[0-9]:[0-9]?[0-9]')
        if r.match(temp) and check_time_validity(hora1, temp, date):
            hora2 = temp
            print(hora2)

    # Pega o texto de preco
    def on_preco_changed(self, pre):
        global preco
        temp = pre.get_text()
        r = re.compile('\d{2}')
        if r.match(temp):
            preco = temp
            print(preco)
            Gtk.Statusbar.push(status, 0, '')
        else:
            Gtk.Statusbar.push(status, 0, 'Formato de preco inválido')
            print("formato de preco inválido")

    # Executar acão ao clicar em alguma coisa nos resultados
    def tree_click(self, path, column, data):
        model = Gtk.TreeView.get_model(path)
        nome = builder.get_object("nome_carona")
        texto = builder.get_object("texto_carona")
        like = builder.get_object("likes_carona")
        inb = builder.get_object("inbox_carona")
        link = builder.get_object("link_carona")
        nome.set_text(model[column][7] + ":")
        like.set_text("Likes: " + model[column][0])
        inb.set_text("Inbox's: " + model[column][1])
        texto.set_text(model[column][5])
        link.set_uri(model[column][4])

        # ("Likes", "Inbox", "Hora", "Preco", 'Link', "Texto", 'Disponibilidade', 'Nome')

        response = postwindow.run()
        if not response:
            postwindow.hide()
        else:
            postwindow.hide()

    # Esconde popup quando aperta o botão de close
    def close_popup(self, close_popup):
        postwindow.hide()


print("Carregando arquivo de UI")
builder = Gtk.Builder()
builder.add_from_file("GUI.glade")
print("Construindo janela")
window = builder.get_object("MainWindow")
postwindow = builder.get_object("PostWindow")
lista = builder.get_object("liststore1")
Gtk.Window.set_title(window, "Caronato v" + str(version))
window.show_all()

status = builder.get_object("status")


def config_read():
    print("Lendo base de token")
    if os.path.isfile('token.txt'):
        print("Arquivo encontrado")
        conf = open('token.txt', 'r')
        global token
        token = conf.read()
        conf.close()
        test_token()
    else:
        print("Arquivo não encontrado")
        Gtk.Statusbar.push(status, 0, 'Base de token não encontrada')
        global token_validity
        token_validity = 0


def config_write():
    conf = open('token.txt', 'w')
    print("Atualizando base com token válido")
    Gtk.Statusbar.push(status, 0, 'Base de tokens atualizada e funcionando')
    conf.write(token)
    conf.close()
    global token_validity
    token_validity = 1


def test_token():
    graph = GraphAPI(token)
    print("Testando token")
    try:
        graph.get_object('me', retry=2)
        print("Token válido")
        config_write()
    except:
        print("Erro:")
        print("Token inválido ou sem internet")
        Gtk.Statusbar.push(status, 0, 'Erro: Token inválido ou sem internet')
        global token_validity
        token_validity = 0


# Download de source
def down_source():
    print("Baixando source do Facebook")
    graph = GraphAPI(token)
    #global source
    try:
        source = (graph.get_object('114497825365282/feed'))
    except:
        Gtk.Statusbar.push(status, 0, 'Seu token parece estar errado...')
        print("Erro de exception na hora de puxar feed")
        return 0
    print(source)
    return source


def check_time_validity(time1, time2, day):
    dt1, dt2 = day + " " + time1, day + " " + time2
    try:
        dt1, dt2, = datetime.datetime.strptime(dt1, "%Y %m %d %H:%M"), datetime.datetime.strptime(dt2, "%Y %m %d %H:%M")
    except:
        Gtk.Statusbar.push(status, 0, 'Horas não são só números aleatórios')
        print("Erro: Usuário não sabe horas")
        return 0
    if dt2 >= dt1 >= datetime.datetime.now():
        Gtk.Statusbar.push(status, 0, '')
        return 1
    Gtk.Statusbar.push(status, 0, 'Matemática não é seu forte')
    print("Erro: Horas ou dia conflitantes")
    return 0


def converter_hora(hora):
    hora = "%s %s" % (date, hora)
    return datetime.datetime.strptime(hora, "%Y %m %d %H:%M")


def pesquisa_hora(string):
    s1 = re.findall(r"\d+:\d+", string, re.I)
    s2 = re.findall(r"(\d+(\s+)?h)", string, re.I)
    if s1:
        s1 = str(re.findall(r'\d+:\d+', str(s1[0]))[0])
        return s1
    elif s2:
        s2 = "%s:00" % str(re.findall(r'\d+', str(s2[0]))[0])
        return s2
    else:
        return -1


def pesquisa_palavra(palavra, string):
    posicão = re.search(palavra, string, re.I)

    if posicão:
        return posicão.start()
    else:
        #   Ciclar abreviacões de cidades
        for cidade in abrev_cidades:
            if re.match(palavra, cidade, re.I):
                for abrev in abrev_cidades[cidade]:
                    posicão = re.search(abrev, string, re.I)
                    if posicão:
                        return posicão.start()
        return -1


def pesquisa_preco(string):
    s1 = re.findall(r"((\d+(,\d+)?)(?= reais))", string, re.I)
    s2 = re.findall(r"(?<=\$)((\s+)?\d+)", string, re.I)
    if s1:
        return int(re.findall(r'\d{2}', str(s1[0][0]))[0])
    elif s2:
        return int(re.findall(r'\d{2}', str(s2[0][0]))[0])
    else:
        return -1


def pesquisa_dia():
    #   fazer algo com a date
    return 1

#   Aplicacão de filtros
def filtrar_tipo():
    print("Filtrando tipo")
    pesq_iter = 0
    source = down_source()
    for data in source['data']:
        if re.search(unidecode(tipo), unidecode(str(data)), re.I) and not re.search('lotad', str(data), re.I):
            temp_message = data["message"]
            temp_id = data["id"]
            pesq_iter += 1

            aplicar_filtos(pesq_iter, temp_id, temp_message)

    Gtk.Statusbar.push(status, 0, 'Finalizado')


def filtrar_preco(pesq_iter, temp_message):
    global temp_preco
    temp_preco = pesquisa_preco(temp_message)
    if 0 <= temp_preco <= int(preco):
        print("Iteracão %d preco %d" % (pesq_iter, temp_preco))
        return 1
    else:
        print("Iteracão %d preco não bate" % pesq_iter)
        return 0


def filtrar_ori_dest(pesq_iter, temp_message):
    if 0 <= pesquisa_palavra(saindo, unidecode(temp_message)) <= pesquisa_palavra(indo, unidecode(temp_message)):
        #   Não precisa adicionar nada à matriz, só continuar
        print("Iteracão %d origem e destino OK" % pesq_iter)
        return 1
    else:
        print("Iteracão %d origem e destino errados" % pesq_iter)
        return 0


def filtrar_hora(pesq_iter, temp_message):
    global temp_hora
    temp_hora = pesquisa_hora(temp_message)
    try:
        if converter_hora(hora1) <= converter_hora(temp_hora) <= converter_hora(hora2):
            print("Iteracão %d hora %s" % (pesq_iter, temp_hora))
            return 1
        print("Iteracão %d hora não bate" % pesq_iter)
    except:
        print("Iteracão %d hora não existe" % pesq_iter)
    return 0


def filtrar_dia(pesq_iter, temp_message):
    #   Quando será que eu vou fazer isso?
    pesquisa_dia()
    return 1

def aplicar_filtos(pesq_iter, temp_id, temp_message):
    if filtrar_hora(pesq_iter, temp_message) and filtrar_preco(pesq_iter, temp_message) \
            and filtrar_ori_dest(pesq_iter, temp_message) and filtrar_dia(pesq_iter, temp_message):
        coef, name, likes, comments = proc_likes(temp_id)
        link = 'https://facebook.com/' + temp_id
        print(temp_hora)
        print(temp_preco)
        print(link)
        print("O coeficiente de disponibilidade é: %d" % coef)
        print(name)
        # ("Likes", "Inbox", "Hora", "Preco", 'Link', "Texto", 'Disponibilidade', 'Nome')
        entry = [str(likes), str(comments), str(temp_hora), str('R$ ' + str(temp_preco)), str(link), str(temp_message), str(coef), str(name)]
        lista.append(list(entry))

def proc_likes(temp_id):
    graph = GraphAPI(token)
    l_source = (graph.get_object(temp_id + '?fields=likes,comments,from'))
    try:
        likes = len(l_source['likes']['data'])
    except KeyError:
        likes = 0
    comments = 0
    try:
        for data in l_source['comments']['data']:
            if re.findall('inbox', data['message'], re.I):
                comments += 1
    except KeyError:
        comments = 0
    name = l_source['from']['name']
    print(comments)
    print(likes)
    coef = - ((likes + 3 * comments) * 5 / 16 - 5)
    if coef < 0:
        coef = 0
    return math.ceil(coef), name, likes, comments



print("Conectando sinais e iniciando GTK")
builder.connect_signals(Handler())
Gtk.main()
