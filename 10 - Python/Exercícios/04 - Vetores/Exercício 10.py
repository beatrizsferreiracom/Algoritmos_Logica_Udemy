#Exercício - Aprovados

N = int(input("Quantos alunos serão digitados? "))

nome = [0] * N
nota1 = [0] * N
nota2 = [0] * N

for i in range(N):

    print(f"Digite nome, primeira e segunda nota do {i+1}º aluno:")
    nome[i] = input("")
    nota1[i] = float(input(""))
    nota2[i] = float(input(""))

print("")
print("Alunos aprovados:")

for i in range(N):

    media = (nota1[i] + nota2[i]) / 2

    if media >= 6:
        print(nome[i])