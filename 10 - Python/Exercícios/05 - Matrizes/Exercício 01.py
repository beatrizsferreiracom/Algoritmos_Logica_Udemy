#Exercício - Diagonal Negativos

ordem = int(input("Qual a ordem da matriz? "))

negativos = 0

mat = [[0 for x in range(ordem)] for x in range(ordem)]

for i in range(ordem):
    for j in range(0, ordem):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

        if mat[i][j] < 0:
            negativos = negativos + 1

print("")
print("Diagonal principal:")

for i in range(ordem):
    print(f"{mat[i][i]} ", end="")

print("")
print("Quantidade de negativos =", negativos)
