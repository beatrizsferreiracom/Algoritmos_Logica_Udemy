#Exercício - Soma Matrizes

linha = int(input("Quantas linhas vai ter cada matriz? "))
coluna = int(input("Quantas colunas vai ter cada matriz? "))

A = [[0 for x in range(coluna)] for x in range(linha)]
B = [[0 for x in range(coluna)] for x in range(linha)]
C = [[0 for x in range(coluna)] for x in range(linha)]

print("Digite os valores da matriz A:")
for i in range(linha):
    for j in range(coluna):
        A[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Digite os valores da matriz B:")
for i in range(linha):
    for j in range(coluna):
        B[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Matriz soma:")

for i in range(linha):
    for j in range(coluna):
        C[i][j] = A[i][j] + B[i][j]

for i in range(linha):
    for j in range(coluna):
        print(C[i][j], end=" ")
    print("")