def ler(content, min, max):
    """
    -- Lê um número inteiro sem erros caso digite algo diferente --

    content: Mensagem a ser mostrada ao usuário.
    min: Número mínimo que deverá ser informado pelo usuário.
    max: Número máximo que poderá ser informado pelo usuário.
    """
    while True:
        n = str(input(content)).replace(' ', '')

        try:
            if int(n) >= min and int(n) <= max:
                n = int(n)
                break
        except:
            continue

    return n

def verificaGrupo(pessoas=0):
    """
    -- Lê quantas pessoas estão em um grupo de viagens e lê a idade de cada um, assim retornando os valores obtidos --
    
    pessoas: Quantidade de pessoas a serem feitas a leitura.
    """
    idade = 0
    infantil = 0
    crianca = 0
    adulto = 0
    for c in range(1, pessoas + 1):
        idade = ler(f'Qual é a idade da {c}° pessoa? ', 0, 200)

        if idade <= 2:
            infantil += 1
        elif idade <= 12:
            crianca += 1
        else:
            adulto += 1

    return {'infantil': infantil, 'crianca': crianca, 'adulto': adulto}