from facepy import GraphAPI
import re
import os.path

'''
	ToDo
Ler as configurações -
Pedir Token -
Mostrar opções de pesquisa
Parsear texto em dicionarios(?)
Aplicar cada um dos filtros
Avaliar resultados de acordo com filtros
Printar melhores resultados com número de resultados, hora de publicação e número de likes
'''


def config_read():
    print("lendo o arquivo")
    if os.path.isfile('token.txt'):
        conf = open('token.txt', 'r')
        global access_token
        access_token = conf.read()
        conf.close()
        test_token()
    else:
        get_token()

def config_write():
    conf = open('token.txt', 'w')
    print("escrevendo no arquivo")
    conf.write(access_token)
    conf.close()

def get_token():
    #pegar token do input
    global access_token
    access_token = input("Entre com um token")
    test_token()


def test_token():
    graph = GraphAPI(access_token)
    print("testando o token")
    try:
        ping = graph.get('me', retry=3)
        print("Token Valid")
        config_write()
    except:
        print("Ocorreu um erro. Provavelmente seus tokens estão desatualizados.")
        print("Atualize-os e tente novamente")
        get_token()


config_read()
print(access_token)
graph = GraphAPI(access_token)

source = (graph.get('114497825365282/feed'))


for idx, data in enumerate(source['data']):
    if (re.search('', str(data), re.I) or re.search('', str(data), re.I))  and (re.search('ofereço', str(data), re.I)): #encontra as mensagens que cabem nessa lógica
        message = re.findall(r'(?<=\'message\': \').*?(?=\')', str(data))   #encontra e seleciona apenas o texto dos posts
        id = re.findall(r'(?<=\'id\': \'114497825365282_).*?(?=\')', str(data)) #pega a id dos comentários
        time = re.findall(r'(?<=\'updated_time\': \').*?(?=\')', str(data)) #pega a hora de postagem do comentário

        id = "".join(id)    #transforma o id de lista para string
        likes_source = (graph.get('114497825365282_'+id+'?fields=likes,comments'))  #faz mais um get pra conseguir os likes e comentarios
        comments = len(re.findall("inbox", str(likes_source), re.I))    #define o numero de comentarios como o numero de 'inbox'
        likes = len(re.findall("name", str(likes_source))) - len(re.findall("from", str(likes_source))) #encontra o numero de likes pelo numero de 'name' menos o numero de 'from'. Essencialmente me dá o numero de likes

        print("Likes: "+str(likes))  #printa likes
        print("Inbox: "+str(comments))  #printa comments

        print("".join(message))     #printa o texto do cara
        print("https://www.facebook.com/groups/caronas.unicamp/permalink/"+id)  #printa o link pra mensagem
        print("".join(time))    #printa o horario, ainda nao parseado
        print("")