#Pisando em ovos

import numpy as np

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
        A = "A"
        colunas = [0,1,2,3,4,5,6,7]
        l2 = [1, A,A,A,A,A,A,A]
        l3 = [2, A,A,A,A,A,A,A]
        l4 = [3, A,A,A,A,A,A,A]
        l5 = [4, A,A,A,A,A,A,A]    
        l6 = [5, A,A,A,A,A,A,A]
        l7 = [6, A,A,A,A,A,A,A] 
        l8 = [7, A,A,A,A,A,A,A]
        terreno = []
        terreno.append([colunas, l2, l3, l4, l5, l6, l7, l8])
        print(terreno)

        print(f"Jogador {armador}, você pode esconder até 3 ovos podres por linha do terreno")
        colunaEscolhida = int(input("Em qual coluna da linha 1 você quer esconder ovos podres? [1 a 7]"))

        menu()

    if opcoesMenu == 3:
        print("\nEm desenvolvimento...2\n")
        menu()

    if opcoesMenu == 4:
        print("\nEm desenvolvimento...3\n")
        print("Pontuação do jogador 1: WIP\nPontuação do jogador 2: WIP\n")
        menu()

    if opcoesMenu == 0:
        print("\nJogo encerrado.\n")
        print("Pontuação final do jogador 1: \nPontuação final do jogador 2: \n")
        break
