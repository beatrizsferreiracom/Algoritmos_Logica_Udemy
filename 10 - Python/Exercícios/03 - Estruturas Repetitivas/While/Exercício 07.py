#Exercício - Pares Consecutivos

soma = 0

x = int(input("Digite um número inteiro: "))

while x != 0:

    if x % 2 != 0:
        x = x + 1

    soma = 5 * x + 20

    print("Soma = ", soma)

    x = int(input("Digite um número inteiro: "))