#Exercício - Negativos Matriz

linha = int(input("Qual a quantidade de linhas da matriz? "))
coluna = int(input("Qual a quantidade de colunas da matriz? "))

mat = [[0 for x in range(coluna)] for x in range(linha)]

for i in range(linha):
    for j in range(coluna):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("")
print("Valores negativos:")

for i in range(linha):
    for j in range(coluna):
        if mat[i][j] < 0:
            print(mat[i][j])