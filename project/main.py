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
cambio = 0


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

# values = (aerea, onibus_valor, diarias_valor, rentalcar_valor, alimentacao_valor, daypass_valor, extra_total)
resp = ler('Digite: ', 0, 10)
values = (0, 0, 0, 0, 0, 0, 0)
if resp == 1:
    values = MCOMIA.__init__()

# Definindo bibliotecas para a leitura
values_biblioteca = {'aerea': values[0],
                'onibus_valor': values[1],
                'diarias_valor': values[2],
                'rentalcar_valor': values[3],
                'alimentacao_valor': values[4],
                'daypass_valor': values[5],
                'extra_total': values[6]}

# Obtendo o valor total
total_dolar = 0
for c in range(0, len(values)):
    total_dolar += values[c]

print(f'{COLORS["regras"]}\nO valor total do pacote de ferias:')
print(f' Passagens Aereas\t\t U${values_biblioteca["aerea"]:.2f}')
print(f' Deslocamento de onibus \t U${values_biblioteca["onibus_valor"]:.2f}')
print(f' Diarias de Hotel \t\t U${values_biblioteca["diarias_valor"]:.2f}')
print(f' Aluguel de Automovel \t\t U${values_biblioteca["rentalcar_valor"]:.2f}')
print(f' Refeicoes \t\t\t U${values_biblioteca["alimentacao_valor"]:.2f}')
print(f' Day-Pass \t\t\t U$%{values_biblioteca["daypass_valor"]:.2f}')
print(f' Atracoes Extras \t\t U${values_biblioteca["extra_total"]:.2f}')

print(f'\n VALOR FINAL \t\t U${total_dolar:.2f}')

if cambio != 1:
    print(f'\n Observe que o valor do pacote esta em dolar americano, digite o cambio do dia para a conversao imediata em reais{COLORS["final"]}')
    cambio = float(input(f'{COLORS["text"]}: '))
    total_real = total_dolar * cambio
else:
    total_real = total_dolar

print(f'\n\n\n{COLORS["final"]}{COLORS["regras"]}O VALOR TOTAL DO SEU PACOTE E DE R${total_real:.2f}, BOAS FERIAS!!!!!!!!\n\n{COLORS["final"]}')