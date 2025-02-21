#Exercício - Negativos

N = int(input("Quantos números você vai digitar? "))

vet = [0] * N

for i in range(N):

    vet[i] = int(input("Digite um número: "))

print("")
print("Números negativos:")

for i in range(N):
    
    if vet[i] < 0:
        print(vet[i])