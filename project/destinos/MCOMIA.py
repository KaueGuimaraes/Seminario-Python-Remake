#Orlando e Miami.

import sys
import os
myDir = os.getcwd()
sys.path.append(myDir)
from pathlib import Path
path = Path(myDir)
a=str(path.parent.absolute())
sys.path.append(a)

from project.util.sistema_de_leitura import *
from project.util.planos_de_viagens import *


COLORS_ = {'title': '\033[35m',
          'regras': '\033[33m',
          'text': '\033[34m',
          'write': '\033[32m',
          'final': '\033[m'}
diarias = 0
pessoas = 0
idades = list()
origem = 0

aerea_ad = 0
aerea_cr = 0
aerea_inf = 0
area = 0


def __init__(COLORS=COLORS_):
    #INICIO
    print(f'\n{COLORS["title"]}')
    print('Voce escolheu aventuras inesqueciveis em Orlando e nas praias de Miami para o seu proximo pacote de ferias, nos Estdos Unidos'.upper())
    print(COLORS['final'])

    print(f'{COLORS["text"]}Para este destino nos lhe ofereceremos pacotes de 5 ate 18 dias de duracao.')
    print('Pretende comprar um pacote de quantos dias?')
    print(COLORS['final'], end='')
    diarias = ler(f'{COLORS["write"]}: ', 5, 18)

    print(COLORS['final'] + COLORS['text'])
    print(f'PARABENS!!! \nPara esta viagem de {diarias} dias, quantas pessoas viajarao, incluindo voce?')
    pessoas = ler(f'{COLORS["write"]}: ', 1, 8)
    idades = verificaGrupo(pessoas)
    print(f'{COLORS["text"]}\nSerao cobrados: \n {idades["infantil"]} tarifas valor infantil. \n {idades["crianca"]} tarifas valor crianca. \n {idades["adulto"]} tarifas valor adulto.\n')

    print('Para o destino Miami e Orlando temos saidas de Goiania ou de Brasilia. \nDe onde prefere o seu embarque inicial?')
    print(f' 1 - Goiânia. \n 2 - Brasilia {COLORS["final"]}')
    origem = ler(f'{COLORS["write"]}: ', 1, 2)

    if origem == 1: # Se a origem foi Goiânia
        aerea_ad = idades["adulto"] * 949
        aerea_cr = idades["crianca"] * 849
        aerea_inf = idades["infantil"] * 709
        aerea = aerea_ad + aerea_cr + aerea_inf
    else: # Se a origem for Brasília
        aerea_ad = idades["adulto"] * 889
        aerea_cr = idades["crianca"] * 889
        aerea_inf = idades["infantil"] * 649
        aerea = aerea_ad + aerea_cr + aerea_inf
    print(f'\n{COLORS["text"]}O preco das passagens para {pessoas} pessoas sera de\n Adultos: U${aerea_ad:.2f} \n Criancas: U${aerea_cr:.2f} \n Infantil: U${aerea_inf:.2f}')
    print(f' Total: U${aerea:.2f}{COLORS["final"]}')

    onibus_valor = onibus(idades, COLORS)
    print('\n')
    diarias_valor = diarias_(diarias, pessoas, idades, COLORS)
    print('\n')
    rentalcar_valor = rentalcar(diarias, pessoas, COLORS)
    print('\n')
    alimentacao_valor = alimentacao(diarias, pessoas, idades, COLORS)
    print('\n')

    daypass_valor = 0
    if rentalcar_valor == 0:
        daypass_valor = daypass(diarias, idades, COLORS)

    extras()


def extras():
    print()