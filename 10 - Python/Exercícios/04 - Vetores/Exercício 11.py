#Exercício - Dados Pessoas

N = int(input("Quantas pessoas serão digitadas? "))

altura = [0] * N
genero = [0] * N

soma = 0
homem = 0
mulher = 0

for i in range(N):

    altura[i] = float(input(f"Altura da {i+1}º pessoa: "))
    genero[i] = input(f"Gênero da {i+1}º pessoa: ")

    if genero[i] == "M" or genero[i] == "m":
        homem = homem + 1
    else:
        mulher = mulher + 1
        soma = soma + altura[i]

print("")

menor = altura[0]
maior = altura[0]

for i in range(1, N):

    if menor > altura[i]:
        menor = altura[i]

    if maior < altura[i]:
        maior = altura[i]

print("Menor altura =", menor)   
print("Maior altura =", maior)

media = soma / mulher

print("Média de altura das mulheres =", round(media,2))
print("Número de homens =", homem)