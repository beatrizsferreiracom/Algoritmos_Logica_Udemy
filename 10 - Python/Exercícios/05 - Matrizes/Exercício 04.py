#Exercício - Cada Linha

ordem = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(ordem)] for x in range(ordem)]

for i in range(ordem):
    for j in range(0, ordem):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("")
print("Maior elemento de cada linha:")

for i in range(ordem):
    maior = [i][0]
    for j in range(ordem):
        if mat[i][j] > maior:
            maior = mat[i][j]
    print(maior)