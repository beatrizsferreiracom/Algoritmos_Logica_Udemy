#Exercício - Acima Diagonal

ordem = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(ordem)] for x in range(ordem)]

for i in range(ordem):
    for j in range(0, ordem):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

soma = 0

for i in range(ordem):
    for j in range(i+1, ordem):
        soma = soma + mat[i][j]

print("")
print("Soma dos elementos acima da diagonal principal =", soma)