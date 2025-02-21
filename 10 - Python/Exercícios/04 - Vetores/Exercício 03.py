#Exercício - Alturas

soma = 0
menor = 0

N = int(input("Quantas pessoas serão digitadas? "))

nome = [0] * N
idade = [0] * N
altura = [0] * N

for i in range(N):

    print(f"Dados da {i+1}º pessoa:")
    nome[i] = input("Nome: ")
    idade[i] = int(input("Idade: "))
    altura[i] = float(input("Altura: "))
    print("")

    soma = soma + altura[i]

    if idade[i] < 16:
        menor = menor + 1

media = soma / N
porc = menor * 100 / N

print("Altura média:", round(media,2))
print("Pessoas com menos de 16 anos:", porc, "%")

for i in range(N):
    
    if idade[i] < 16:
        print(nome[i])