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

    extra_total = extras(COLORS)

    # total_dolar = (area, onibus_valor, diarias_valor, rentalcar_valor, alimentacao_valor, daypass_valor, extra_total)
    return (area, onibus_valor, diarias_valor, rentalcar_valor, alimentacao_valor, daypass_valor, extra_total)


def extras(COLORS=COLORS_):
    resp = 10
    extra_total = 0
    while resp != 0:
        print(f'{COLORS["text"]}\nMUITA ANTENCAO!!! Para o destino de Orlando e Miami, temos ainda CINCO ATRACOES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e diversao.')
        print('Voce podera escolher tantas quantas quiser dentre as opcoes.')

        print(' 1 - Ingresso para os fantasticos parques de Walt Disney World')
        print(' 2 - Dia de compras no Sawgrass Mills e Dolphin Mall.')
        print(' 3 - Discovery Cove e Sea World.')
        print(' 4 - Ingresso para assistir ao jogo do Miami Heat ou Orlando Magic.')
        print(' 5 - Ingressos para Universal Studios, Island of Adventures e Blue Men Group.')
        print(f'Caso nao tenha interesse, basta digitar 0{COLORS["final"]}')

        resp = ler(f'{COLORS["write"]}: ', 0, 5)

        print(f'{COLORS["final"]}', end='')
        if resp == 1: extra_total = extras_template(COLORS, extra_total, 'ingressos para os parques tematicos de Walt Disney World', 4, 74.50)
        elif resp == 2: extra_total = extras_template(COLORS, extra_total, 'dia de compras no Sawgrass Mills e Dolphins Mall', 12, 15.00)
        elif resp == 3: extra_total = extras_template(COLORS, extra_total, 'a atracao Discovery Cove e Sea World Adventure', 5, 179.50)
        elif resp == 4: extra_total = extras_template(COLORS, extra_total, 'adquirir ingressos para um jogo de basketball de sua preferencia dos times Miami Heat ou Orlando Magic', '12 anos completos pagam $39.90, acima de 12 anos $89.90 e crianças de até 5', 179.50)
        elif resp == 5: extra_total = extras_template(COLORS, extra_total, 'ingressos para o Universal Studios. Island of Adventures Park and Blue Men Group', '5', 179.50)
        print(f'{COLORS["final"]}{COLORS["text"]}Lembrando, caso não queira selecionar mais opcoes, basta digitar o zero.')
        print('\n\n\n\n')
    
    return extra_total

def extras_template(COLORS=COLORS_, extra_total=0, nome='nome', idade=0, valor=0):
    print(f'\n{COLORS["text"]}Voce  escolheu {nome}. Quantos ingressos deseja adquirir?')
    print(f'ATENCAO: criancas de ate {idade} anos completos nao pagam por esta atracao extra.{COLORS["final"]}')

    x = ler(f'{COLORS["write"]}: ', 0, 30)
    print(COLORS['final'], end='')

    return (x * valor) + extra_total