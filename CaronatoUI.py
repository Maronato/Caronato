import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk
import os.path

import re
from facepy import GraphAPI
import datetime

version = 0.2


software_list = [("Firefox", "2002", "C++", "5", '1'),
                 ("Eclipse", "2004", "Java", "3", '2'),
                 ("Pitivi", "2004", "Python", "2", '3'),
                 ("Netbeans", "1996", "Java", "1", '4')]

class Handler(Gtk.Window):

    def __init__(self):
        self.builder = Gtk.Builder()

        config_read()

        lista = builder.get_object("liststore1")

        lista.clear()

        #   Pre-set variables
        global tipo
        tipo = 'ofereço'
        global hora1
        hora1 = '00:00'
        global hora2
        hora2 = '00:00'
        global preço
        preço = '00'
        global date
        date = datetime.datetime.now()

        for soft in software_list:
            lista.append(list(soft))
            for soft in software_list:
                lista.append(list(soft))




    #   Funções de Handler
    #   Termina o programa
    def onDeleteWindow(self, *args):
        Gtk.main_quit(*args)

    #   Pega o clique do botão
    def pesquisar(self, find_b):
        if token_validity:
            Gtk.Statusbar.push(status, 0, 'Baixando página...')
            down_source()
            apply_filter()

        else:
            test_token()

    #   Pega o dia
    def on_cal_day_selected(self, cal):
        global date
        temp = Gtk.Calendar.get_date(cal)
        temp = "%d %d %d" % (temp[0], temp[1] + 1, temp[2])
        temp = temp + " " + hora1
        try:
            temp = datetime.datetime.strptime(temp, "%Y %m %d %H:%M")
        except:
            Gtk.Statusbar.push(status, 0, 'Horas não são só números aleatórios')
            print("erro: usuario nao sabe horas")
            return
        if temp >= datetime.datetime.now():
            date = temp
            print(date)
            Gtk.Statusbar.push(status, 0, '')
        else:
            Gtk.Statusbar.push(status, 0, 'Wait a minute, Doc')
            print("formato de dia inválido")

    #   Pega o texto do comboboxtext saindo
    def on_saindo_changed(self, combo):
        global saindo
        tree_iter = combo.get_active_iter()
        if tree_iter != None:
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
        if tree_iter != None:
            model = combo.get_model()
            indo = model[tree_iter][0]
        else:
            entry = combo.get_child()
            indo = entry.get_text()
        print("indo: " + indo)

    #   Pega o texto do comboboxtext tipo
    def on_tipo_changed(self, combo, data=None):
        tree_iter = combo.get_active_iter()
        model = combo.get_model()
        global tipo
        tipo = model[tree_iter][0]


    #   Pega o texto do token_entry
    def on_token_entry_changed(self, entry, data=None):
        global token
        token = entry.get_text()
        #Gtk.Statusbar.push(status, 0, 'Token Inválido. Entre outro')
        print(token)

    #   Pega o texto de hora1
    def on_hora1_changed(self, hora, data=None):
        global hora1
        temp = hora.get_text()
        r = re.compile('\d{2}:\d{2}')
        if r.match(temp):
            hora1 = temp
            print(hora1)
            Gtk.Statusbar.push(status, 0, '')
        else:
            Gtk.Statusbar.push(status, 0, 'Formato de hora inválido')
            print("formato de hora inválido")


    #   Pega o texto de hora2
    def on_hora2_changed(self, hora, data=None):
        global hora2
        temp = hora.get_text()
        r = re.compile('\d{2}:\d{2}')
        if r.match(temp):
            hora2 = temp
            print(hora2)
            Gtk.Statusbar.push(status, 0, '')
        else:
            Gtk.Statusbar.push(status, 0, 'Formato de hora inválido')
            print("formato de hora inválido")

    #   Pega o texto de preço
    def on_preço_changed(self, pre, data=None):
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

    #   Executar ação ao clicar em alguma coisa nos resultados
    def tree_click(self, path, column, data):
        model = Gtk.TreeView.get_model(path)
        print(model[column][4]) #Link pro comentário

builder = Gtk.Builder()
builder.add_from_file("GUI.glade")

window = builder.get_object("MainWindow")
Gtk.Window.set_title(window, "Caronato v" + str(version))
window.show_all()

status = builder.get_object("status")


#   Fim do UI e inicio do programa

#   Leitura e confirmação de Token
def config_read():
    print("lendo o arquivo")
    Gtk.Statusbar.push(status, 0, 'Lendo arquivo')
    if os.path.isfile('token.txt'):
        conf = open('token.txt', 'r')
        global token
        token = conf.read()
        conf.close()
        test_token()
    else:
        print("não existe arquivo")
        Gtk.Statusbar.push(status, 0, 'Arquivo não encontrado')
        global token_validity
        token_validity = 0


def config_write():
    conf = open('token.txt', 'w')
    print("escrevendo no arquivo")
    Gtk.Statusbar.push(status, 0, 'Base de tokens atualizada e funcionando')
    conf.write(token)
    conf.close()
    global token_validity
    token_validity = 1


def test_token():
    graph = GraphAPI(token)
    print("testando o token")
    try:
        ping = graph.get('me', retry=3)
        print("Token Valid")
        config_write()
    except:
        print("Ocorreu um erro. Provavelmente seus tokens estão desatualizados.")
        print("Atualize-os e tente novamente")
        Gtk.Statusbar.push(status, 0, 'Token inválido ou sem internet')
        global token_validity
        token_validity = 0


#   Download de source
def down_source():
    print("baixando source")
    graph = GraphAPI(token)
    global source
    source = (graph.get('114497825365282/feed'))
    print(source)

#   Aplicação de filtros
def apply_filter():
    Gtk.Statusbar.push(status, 0, 'Parseando dados...')
    print("aplicando filtro de tipo")

    for data in source['data']:
        if re.search(tipo, str(data), re.I):

            message = data["message"]
            id = data["id"]
            time = data["updated_time"]

            now = datetime.datetime.now()

            global date

            r = re.compile('\d{4}-\d{2}-\d{2}')
            date = r.findall(str(date))
            date = date[0]
            then1 = date + " " + hora1
            then2 = date + " " + hora2
            try:
                then1 = datetime.datetime.strptime(then1, "%Y-%m-%d %H:%M")
                then2 = datetime.datetime.strptime(then2, "%Y-%m-%d %H:%M")
            except:
                Gtk.Statusbar.push(status, 0, 'Horas não são só números aleatórios')
                print("erro: usuario nao sabe horas")
                break

            if then1 > then2:
                Gtk.Statusbar.push(status, 0, 'Matemática não é seu forte')
                print("erro: then1>then2")
                break



print("PROBLEMA")
builder.connect_signals(Handler())


Gtk.main()