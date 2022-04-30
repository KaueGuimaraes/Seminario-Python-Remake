from time import sleep


N = 10


def title(content='', N_LINHAS=N, symbol='='):
    """
    -- Faz a formatação de uma string para destacá-la como um título --

    content: Valor em str para formatar.
    N_LINHAS: Quantas linhas de espaçamento terá o valor informado.
    symbol: Símbolo escolhido para a formatação.
    """
    esp = symbol * N_LINHAS
    return esp + content + esp


def writting_text(content='', timer=0.05):
    """
    -- Printa uma string de caractere em caractere, dando a impressão de digitação --

    content: Valor em str para formatar.
    timer: Tempo para printar cada caractere.
    """
    for c in range(0, len(content)):
        print(content[c], end='')
        sleep(timer)
    print()