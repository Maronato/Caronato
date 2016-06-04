import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk
import os.path
import re
from facepy import GraphAPI
import datetime

print("Dependências carregadas")

'''     Considerações

Quando clicar duas vezes no item, mostrar uma nova janela com a mensagem original e com um link pro post(pensar em
adicionar botão pra dar like, comentar, etc) (aprender como aplicar text wrap pra fazer a mensagem ficar na linha

Na hora de aplicar os filtros de destino e pá, usar o module Unidecode pra remover os acentos tanto do texto original
quanto do texto que vai ser pesquisado. Assim é possível comparar os dois de forma completa.

Na hora de pesquisar textos, descobrir forma de verificar a posição do texto na string pra saber qual veio antes de
qual. Assim é possível ter uma boa ideia de qual o destino e origem.

Pensar em forma de ler texto antes e depois de valores e datas para saber se são valores ou datas. Isso pode ser bem
complicado e vou provavelmente quebrar bastante a cabeça com isso.

'''



version = 0.2

software_list = [("Firefox", "2002", "C++", "5", '1'),
                 ("Eclipse", "2004", "Java", "3", '2'),
                 ("Pitivi", "2004", "Python", "2", '3'),
                 ("Netbeans", "1996", "Java", "1", '4')]


class Handler(Gtk.Window):
    def __init__(self):
        print("Carregando configurações iniciais")
        self.builder = Gtk.Builder()
        lista = builder.get_object("liststore1")
        lista.clear()

        #   Pre-set variables
        global tipo
        tipo = 'ofereço'
        global hora1
        hora1 = '00:00'
        global hora2
        hora2 = '23:59'
        global preço
        preço = '00'
        global date
        date = datetime.datetime.now()
        date = "%d %d %d" % (date.year, date.month, date.day)
        global token
        token = ''

        print("Fazendo leitura inicial da base de token")
        config_read()

        for soft in software_list:
            lista.append(list(soft))
            for soft2 in software_list:
                lista.append(list(soft2))

    # Funções de Handler
    #   Termina o programa
    def on_delete_window(*args):
        print("Terminando programa")
        Gtk.main_quit(*args)

    #   Pega o clique do botão
    def pesquisar(self, find_b):
        Gtk.Statusbar.push(status, 0, '')
        if token_validity:
            Gtk.Statusbar.push(status, 0, 'Baixando página...')
            down_source()
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
            saindo = model[tree_iter][0]
        else:
            entry = combo.get_child()
            saindo = entry.get_text()
        print("saindo: " + saindo)

    #   Pega o texto do comboboxtext indo
    def on_indo_changed(self, combo):
        global indo
        tree_iter = combo.get_active_iter()
        if tree_iter is not None:
            model = combo.get_model()
            indo = model[tree_iter][0]
        else:
            entry = combo.get_child()
            indo = entry.get_text()
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

    # Pega o texto de preço
    def on_preço_changed(self, pre):
        global preço
        temp = pre.get_text()
        r = re.compile('\d{2}')
        if r.match(temp):
            preço = temp
            print(preço)
            Gtk.Statusbar.push(status, 0, '')
        else:
            Gtk.Statusbar.push(status, 0, 'Formato de preço inválido')
            print("formato de preço inválido")

    # Executar ação ao clicar em alguma coisa nos resultados
    def tree_click(self, path, column, data):
        model = Gtk.TreeView.get_model(path)
        print(model[column][4])  # Link pro comentário


print("Carregando arquivo de UI")
builder = Gtk.Builder()
builder.add_from_file("GUI.glade")
print("Construindo janela")
window = builder.get_object("MainWindow")
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
        graph.get('me', retry=2)
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
    global source
    try:
        source = (graph.get('114497825365282/feed'))
    except:
        Gtk.Statusbar.push(status, 0, 'Seu token parece estar errado...')
        print("Erro de exception na hora de puxar feed")
        return
    print(source)


#   Aplicação de filtros
def filtrar_tipo():
    Gtk.Statusbar.push(status, 0, 'Parseando dados...')
    print("Filtrando tipo")

    for data in source['data']:
        if re.search(tipo, str(data), re.I):

            message = data["message"]
            id = data["id"]
            time = data["updated_time"]

            if not check_time_validity(hora1, hora2, date):
                print("Você nao devia ter chegado até aqui")
            print("sucesso")

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


print("Conectando sinais e iniciando GTK")
builder.connect_signals(Handler())
Gtk.main()
