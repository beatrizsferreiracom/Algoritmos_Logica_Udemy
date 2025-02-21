#Exercício - Matriz Geral

ordem = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(ordem)] for x in range(ordem)]

for i in range(ordem):
    for j in range(ordem):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

soma = 0

for i in range(ordem):
    for j in range(ordem):   
        if mat[i][j] > 0:
            soma = soma + mat[i][j]

print("")
print("Soma dos positivos:", soma)

print("")
linha = int(input("Escolha uma linha: "))
print("Linha escolhida: ", end="")
for j in range(ordem):
    print(mat[linha][j], end=" ")
print("")

print("")
coluna = int(input("Escolha uma coluna: "))
print("Coluna escolhida: ", end="")
for i in range(ordem):
    print(mat[i][coluna], end=" ")
print("")

print("")
print("Diagonal principal: ", end="")
for i in range(ordem):
    print(mat[i][i], end=" ")
print("")

print("")
print("Matriz alterada:")
for i in range(ordem):
    for j in range(ordem):
        if mat[i][j] < 0:
            mat[i][j] = mat[i][j] ** 2
        print(mat[i][j], end=" ")
    print("")