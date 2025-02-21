#Exercício - Média Pares

soma = 0
pares = 0

N = int(input("Quantos elementos vai ter o vetor? "))

vet = [0] * N

for i in range(N):

    vet[i] = float(input("Digite um número: "))

    if vet[i] % 2 == 0:
        soma = soma + vet[i]
        pares = pares + 1
    
if pares == 0:
    print("Nenhum número par")
else:
    media = soma / pares
    print("Média dos pares =", round(media,1))