#Pisando em ovos

print("Sejam bem-vindos ao pisando em ovos!\n")

def menu():
    print('Opções:\n1 - Definir Armador\n2 - Plantar Armadilhas\n3 - Iniciar com Andarilho\n4 - Mostrar o placar\n0 - Finalizar o Jogo')
menu()

terreno = [
        ["0","1","2","3","4","5","6","7"],
        ["1","A","A","A","A","A","A","A"],
        ["2","A","A","A","A","A","A","A"],
        ["3","A","A","A","A","A","A","A"],
        ["4","A","A","A","A","A","A","A"],
        ["5","A","A","A","A","A","A","A"],
        ["6","A","A","A","A","A","A","A"],
        ["7","A","A","A","A","A","A","A"],
        ]

pontuacaoP1 = 0
pontuacaoP2 = 0

while True:
    opcoesMenu = int(input("\n"))
    if opcoesMenu == 1:
        print("\nQual jogador plantará as armadilhas? [1 ou 2]")
        armador = int(input())
            
        if armador == 1:   
            andarilho = 2
        elif armador == 2:
            andarilho = 1
        print(f"O armador é o jogador: {armador}\nO andarilho é o jogador: {andarilho}\n")
        menu()

    if opcoesMenu == 2:
        terrenoImpressao = f"Observe o terreno abaixo:\n0 1 2 3 4 5 6 7\n1 A A A A A A A\n2 A A A A A A A\n3 A A A A A A A\n4 A A A A A A A\n5 A A A A A A A\n6 A A A A A A A\n7 A A A A A A A\n"
        print(terrenoImpressao)

        print(f"Jogador {armador}, você pode esconder até 3 ovos podres por linha do terreno")
        print("Em qual coluna da linha 1 você quer esconder um ovo podre? [1 a 7]")
        colunaEscolhida = int(input())
        if colunaEscolhida == 1:
            terreno[1][1] = "O"
            terrenoImpressao = f"Observe o terreno abaixo:\n{terreno[0][0]} {terreno[0][1]} {terreno[0][2]} {terreno[0][3]} {terreno[0][4]} {terreno[0][5]} {terreno[0][6]} {terreno[0][7]}\n{terreno[1][0]} {terreno[1][1]} {terreno[1][2]} {terreno[1][3]} {terreno[1][4]} {terreno[1][5]} {terreno[1][6]} {terreno[1][7]}\n{terreno[2][0]} {terreno[2][1]} {terreno[2][2]} {terreno[2][3]} {terreno[2][4]} {terreno[2][5]} {terreno[2][6]} {terreno[2][7]}\n{terreno[3][0]} {terreno[3][1]} {terreno[3][2]} {terreno[3][3]} {terreno[3][4]} {terreno[3][5]} {terreno[3][6]} {terreno[3][7]}\n{terreno[4][0]} {terreno[4][1]} {terreno[4][2]} {terreno[4][3]} {terreno[4][4]} {terreno[4][5]} {terreno[4][6]} {terreno[4][7]}\n{terreno[5][0]} {terreno[5][1]} {terreno[5][2]} {terreno[5][3]} {terreno[5][4]} {terreno[5][5]} {terreno[5][6]} {terreno[5][7]}\n{terreno[6][0]} {terreno[6][1]} {terreno[6][2]} {terreno[6][3]} {terreno[6][4]} {terreno[6][5]} {terreno[6][6]} {terreno[6][7]}\n{terreno[7][0]} {terreno[7][1]} {terreno[7][2]} {terreno[7][3]} {terreno[7][4]} {terreno[7][5]} {terreno[7][6]} {terreno[7][7]}"
            print(terrenoImpressao)
        menu()

    if opcoesMenu == 3:
        print("\nEm desenvolvimento...2\n")
        menu()
        if "AndarilhoPassou":
            andarilho += 1
        elif "pisa em armadilha":
            pontuacaoP2 += 1
    if opcoesMenu == 4:
        print(f"Pontuação do jogador 1: {pontuacaoP1}\nPontuação do jogador 2: {pontuacaoP1}\n")
        menu()

    if opcoesMenu == 0:
        print("\nJogo encerrado.\n")
        print(f"Pontuação final do jogador 1: {'pontuacaoP1'}\nPontuação final do jogador 2: {'pontuacaoP2'}\n")
        break