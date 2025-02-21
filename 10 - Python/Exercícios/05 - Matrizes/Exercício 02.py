#Exercício - Soma Linhas

linha = int(input("Qual a quantidade de linhas da matriz? "))
coluna = int(input("Qual a quantidade de colunas da matriz? "))

mat = [[0 for x in range(coluna)] for x in range(linha)]
vet = [0] * linha

for i in range(linha):
    print(f"Digite os elementos da {i+1}º linha:")
    for j in range(coluna):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

print("")
print("Vetor gerado:")

for i in range(linha):
    vet[i] = 0
    for j in range(coluna): 
        vet[i] = vet[i] + mat[i][j]
    print(vet[i])