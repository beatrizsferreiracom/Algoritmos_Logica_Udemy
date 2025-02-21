#Exercício - Soma Vetor

soma = 0

N = int(input("Quantos números você vai digitar? "))

vet = [0] * N

for i in range(N):

    vet[i] = float(input("Digite um número: "))
    soma = soma + vet[i]

media = soma / N

print("Valores = ", end="")

for i in range(N):

    print(vet[i], "|", end=" ")

print("")
print("Soma =", soma)
print("Média =", media)