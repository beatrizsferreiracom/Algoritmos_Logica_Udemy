#Exercício - Divisão

n = int(input("Quantos casos você vai digitar? "))

for i in range(n):

    x = float(input("Entre com o numerador: "))
    y = float(input("Entre com o denominador: "))

    if y != 0:
        divisao = x / y
        print("Divisão =", divisao)
        print("")
    else:
        print("Divisão impossível!")
        print("")