#Exercício - Soma Vetores

N = int(input("Quantos valores vai ter cada vetor? "))

A = [0] * N
B = [0] * N
C = [0] * N


print("Digite os valores do vetor A:")

for i in range(N):

    A[i] = int(input(""))


print("Digite os valores do vetor B:")

for i in range(N):

    B[i] = int(input(""))


print("")
print("Vetor resultante:")

for i in range(N):

    C[i] = A[i] + B[i]
    print(C[i])