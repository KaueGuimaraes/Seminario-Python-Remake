from project.util.sistema_de_leitura import *


def onibus(idades, colors):
    """
    -- Calcula o valor estimado para passagens de ônibus --

    idades: Biblioteca com quantidade de crianças, adultos e infântis registrados.
    colors: Biblioteca com cores registradas.
    """
    resp = str(input(f'{colors["write"]}\nDeseja adicionar um onibus com o percurso de ida e volta saindo de Pires do Rio ate o aeroporto escolhido? (S/N) ')).upper().replace(' ', '')

    if resp[0] == 'S':
        bus_ad = idades['adulto'] * 20
        bus_cr = idades['crianca'] * 10
        bus = bus_ad + bus_cr
        print(f'{colors["final"]}{colors["text"]}Preco final do onibus: U${bus:.2f}{colors["final"]}')
        return bus
    return 0


def diarias_(diarias, pessoas, idades, colors):
    """
    -- Calcula o valor estimado para diárias em um hótel --

    diarias: Variável que guarda o valor da quantidade de dias desejados pelo usuário à ficar no local selecionado.
    pessoas: Número de pessoas que viajará.
    idades: Biblioteca com quantidade de crianças, adultos e infântis registrados.
    colors: Biblioteca com cores registradas.
    """
    dias = diarias - 2
    if pessoas == 1:
        hotel = 1 * 99 * dias
        print(f'{colors["text"]}\nO pacote escolhido tera {dias} diarias de hotel e o preco final das diarias com cafe da manha incluido sera de U${hotel:.2f}{colors["final"]}')
    else:
        quartos = ler(f'{colors["write"]}Quantos quartos deseja reservar para a viagem? ', 1, 50)
        hotel_ad = (idades['adulto']*99.00 * dias)
        hotel_cr = (idades['crianca']*59.00 * dias)
        hotel = (hotel_ad + hotel_cr) * quartos
        print(f'{colors["final"]}{colors["text"]}O pacote escolhido tera {dias} diarias de hotel em {quartos} quartos e o preco final das diarias com cafe da manha incluido sera de U${hotel:.2f}{colors["final"]}')
    
    return hotel


def rentalcar(diarias, pessoas, colors):
    """
    -- Calcula a valor estimado para aluguel de veículos --

    diarias: Variável que guarda o valor da quantidade de dias desejados pelo usuário à ficar no local selecionado.
    pessoas: Número de pessoas que viajará.
    colors: Biblioteca com cores registradas.
    """
    dias = diarias - 2

    resp = str(input(f'{colors["write"]}Deseja adicionar o aluguel de veiculo para sua maior comodidade no destino adquirido? (S/N) ')).upper().replace(' ', '')

    print(colors['final'] + colors['text'], end='')
    if resp[0] == 'S':
        if pessoas <= 5: # Será necessário somente 1 veículo
            multi = 49.90, 69.90
            print(f'Deseja protecao total ou parcial do veiculo?')
            print(' 1 - Protecao parcial')
            print(f' 2 - Protecao total{colors["final"]}')

            resp1 = ler(f'{colors["write"]}: ', 1, 2)

            print(f'{colors["final"]}{colors["text"]}O pacote escolhido tera {dias} diarias de locacao de 1 veiculo e o preco final com a protecao escolhida sera de U$', end='')
        else:
            multi = 49.90 * 2, 69.90 * 2
            print('Devido ao numero de passageiros, serao cobrado 2 veiculos')
            print(f'Deseja protecao total ou parcial do veiculo?')
            print(' 1 - Protecao parcial')
            print(f' 2 - Protecao total{colors["final"]}')

            resp1 = ler(f'{colors["write"]}: ', 1, 2)

            print(f'{colors["final"]}{colors["text"]}O pacote escolhido tera {dias} diarias de locacao de 2 veiculos e o preco final com a protecao escolhida sera de U$', end='')

        if resp1 == 1: rent_total = dias * 49.90
        else: rent_total = dias * 69.90
        print(f'{rent_total:.2f}{colors["final"]}')
        return rent_total
    return 0


def alimentacao(diarias, pessoas, idades, colors):
    """
    -- Calcula o valor estimado para refeições diárias --

    diarias: Variável que guarda o valor da quantidade de dias desejados pelo usuário à ficar no local selecionado.
    pessoas: Número de pessoas que viajará.
    idades: Biblioteca com quantidade de crianças, adultos e infântis registrados.
    colors: Biblioteca com cores registradas.
    """
    print(f'{colors["text"]}Qual o tipo de alimentacao que deseja escolher?')
    print(' 1 - Alimentacao completa com almoco e jantar inclusos.')
    print(' 2 - Alimentacao parcial apenas com jantar incluso.')
    print(' 3 - Alimentacao parcial apenas com almoco incluso.')
    print(' 0 - Nao necessito deste serviço extra.')
    print(f'OBS: O cafe da manha ja esta incluso na sua diaria do hotel{colors["final"]}')

    resp = ler(f'{colors["write"]}: ', 0, 3)

    if resp == 0: # No food
        return 0
    else:
        print(f'Voce escolheu Alimentacao', end=' ')
        if resp == 1: # Completa
            mutli = 30, 20, 5 # adulto, criança, infântil
            print('Completa com almoco e jantar')
        elif resp == 2: # Jantar
            multi = 20, 15, 3
            print('Parcial com jantar incluso')
        else: # Almoço
            multi = 15, 10, 2
            print('Parcial com almoco incluso')
        total = (idades['adulto'] * multi[0] * diarias) + (idades['crianca'] * multi[1] * diarias) + (idades['infantil'] * multi[2] * diarias)
        print(f'O preco das refeicoes para {pessoas} sera de U${total:.2f}{colors["final"]}')
        return total


def daypass(diarias, idades, colors):
    """
    -- Calcula valor estimado para uso de veículos alternativos. Como metro, trem e ônibus. --

    diarias: Variável que guarda o valor da quantidade de dias desejados pelo usuário à ficar no local selecionado.
    idades: Biblioteca com quantidade de crianças, adultos e infântis registrados.
    colors: Biblioteca com cores registradas.
    """
    print(f'{colors["text"]}Observamos que voce nao optou pelo alguel de veiculos para sua maior comodidade.')
    print('Sendo assim, lhe oferecemos para esta viagem um Day-Pass no qual voce tera um passe livre')
    print(f'nas linhas conjugadas de metro, trem e onibus municipais.{colors["final"]}')
    
    resp = str(input(f'{colors["write"]}Deseja adquiri-lo? (S/N) ')).upper().replace(' ', '')
    if resp[0] == 'S':
        pass_ad = idades['adulto'] * diarias * 9
        pass_cr = idades['crinca'] * diarias * 5
        total = pass_ad + pass_cr

        print(f'{colors["text"]}O preco dos tickets conjugados para esta viagem sera de U${total:.2f}')
        return total
    return 0

