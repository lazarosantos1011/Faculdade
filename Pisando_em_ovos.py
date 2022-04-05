#Pisando em ovos

print("Sejam bem-vindos ao pisando em ovos!\n")
def menu():
    print('Opções:\n1 - Definir Armador\n2 - Plantar Armadilhas\n3 - Iniciar com Andarilho\n4 - Mostrar o placar\n0 - Finalizar o Jogo')
menu()

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
        print("\nEm desenvolvimento...1\n")
        menu()

    if opcoesMenu == 3:
        print("\nEm desenvolvimento...2\n")
        menu()

    if opcoesMenu == 4:
        print("\nEm desenvolvimento...3\n")
        print("Pontuação do jogador 1: WIP\nPontuação do jogador 2: WIP")
        menu()

    if opcoesMenu == 0:
        print("\nJogo encerrado.\n")
        print("Pontuação final do jogador 1: \nPontuação final do jogador 2: ")
        break