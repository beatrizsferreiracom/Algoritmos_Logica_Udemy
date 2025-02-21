#Exercício - Abaixo da Média

soma = 0

N = int(input("Quantos elementos vai ter o vetor? "))

vet = [0] * N

for i in range(N):

    vet[i] = float(input("Digite um número: "))
    soma = soma + vet[i]

media = soma / N

print("")
print("Média do vetor =", round(media, 3))
print("Elementos abaixo da média:")

for i in range(N):

    if vet[i] < media:
        print(vet[i])