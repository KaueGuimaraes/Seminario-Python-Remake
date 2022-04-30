'''
REESCRITO EM PYTHON POR:
KAUÊ ARAÚJO GUIMARÃES

UNIVERSIDADE ESTADUAL DE GOIAS
CURSO SUPERIOR DE TECNOLOGIA EM REDES DE COMPUTADORES
LINGUAGEM DE PROGRAMA��O I
BRUNO GUIMAR�ES DA SILVA


SEMIN�RIO - ALGORITMO F�RIAS

PACOTES ESPECIAIS DE F�RIAS. ADQUIRA O SEU PACOTE AUTOMATICAMENTE, S�O 10 �TIMAS OP��ES DE F�RIAS.

Veja abaixo as regras:

Escolha uma das nossas op��es de destino.
Voc� poder� comprar pacotes de 3 at� 18 dias de dura��o.
Nossos pacotes autom�ticos est�o dispon�veis para 1 at� 8 pessoas no m�ximo.
Para pacotes com maior dura��o ou grupos com mais de 6 pessoas, por favor nos contatar pelo telefone 0800-55-77-8001.
BOAS F�RIAS!!!

Qual ser� o destino das suas pr�ximas f�rias?

Digite:
1 - Orlando e Miami.
2 - Paris.
3 - Londres.
4 - Sydney.
5 - New York.
6 - Santiago do Chile.
7 - Tokyo.
8 - Rio de Janeiro.
9 - Fernando de Noronha.
10 - Caldas Novas.
0 - Encerrar o programa
'''

from util.format import *
from util.sistema_de_leitura import *


import destinos.MCOMIA as MCOMIA


N_LINHAS = 33
COLORS = {'title': '\033[35m',
          'regras': '\033[33m',
          'text': '\033[34m',
          'write': '\033[32m',
          'final': '\033[m'}


#INICIO DO PROGRAMA
print(f'\n{COLORS["title"]}PACOTES ESPECIAIS DE FERIAS. ADQUIRA O SEU PACOTE AUTOMATICAMENTE, SAO 10 OTIMAS OPCOES DE FERIAS.{COLORS["final"]}')

print(COLORS['regras'])
print(title(' REGRAS ', N_LINHAS))
print('Voce podera comprar pacotes de 3 ate 18 dias de duracao.')
print('Nosso pacotes automaticos estao disponveis para 1 ate 8 pessoas no maximo.')
print('Para pacotes com maior duracao ou grupos com mais de 8 pessoas,')
print('por favor nos contatar pelo telefone 0800-55-77-8001')
print('BOAS FERIAS!!!')
print(COLORS['final'])

print(COLORS['text'])
print('Qual sera o destino das suas proximas ferias?')
print(' 1 - Orlando e Miami. \n 2 - Paris. \n 3 - Londres. \n 4 - Sydney. \n 5 - New York. \n 6 - Santiago do Chile. \n 7 - Tokyo. \n 8 - Rio de Janeiro.')
print(' 9 - Fernando de Noronha. \n 10 - Caldas Novas. \n 0 - Encerrar o programa')
print(COLORS['final'])

print(COLORS['write'], end='')
#

resp = ler('Digite: ', 0, 10)
if resp == 1:
    MCOMIA.__init__()