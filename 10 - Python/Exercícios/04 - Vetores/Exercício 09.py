#Exercício - Mais Velho

N = int(input("Quantas pessoas você vai digitar? "))

nome = [0] * N
idade = [0] * N

maisVelho = idade[0]
posicao = 0

for i in range(N):

    print(f"Dados da {i+1}º pessoa:")
    nome[i] = input("Nome: ")
    idade[i] = int(input("Idade: "))

    if maisVelho < idade[i]:
        maisVelho = idade[i]
        posicao = i
    
print("")
print("Pessoa mais velha:", nome[posicao])