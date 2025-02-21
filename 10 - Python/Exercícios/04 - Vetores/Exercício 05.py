#Exercício - Maior Posição

N = int(input("Quantos números você vai digitar? "))

vet = [0] * N

maior = vet[0]
posicao = 0

for i in range(N):

    vet[i] = float(input("Digite um número: "))

    if maior < vet[i]:
        maior = vet[i]
        posicao = i

print("")
print("Maior valor =", maior)
print("Posição do maior valor =", posicao)