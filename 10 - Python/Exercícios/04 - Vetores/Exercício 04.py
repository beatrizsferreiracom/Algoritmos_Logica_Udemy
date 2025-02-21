#Exercício - Números Pares

pares = 0

N = int(input("Quantos números você vai digitar? "))

vet = [0] * N

for i in range(N):

    vet[i] = int(input("Digite um número: "))

print("")
print("Números pares:")

for i in range(N):
    
    if vet[i] % 2 == 0:
        print(vet[i], "|", end=" ")
        pares = pares + 1

print("")
print("")
print("Quantidade de pares =", pares)