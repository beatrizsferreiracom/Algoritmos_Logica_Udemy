#Exercício - Par Ímpar

n = int(input("Quantos números você vai digitar? "))

for i in range(n):
    
    numero = int(input("Digite um número: "))

    if numero == 0:
        print("Nulo")
    elif numero % 2 == 0:
        if numero > 0:
            print("Par positivo")
        else:
            print("Par negativo")
    else:
        if numero > 0:
            print("Ímpar positivo")
        else:
            print("Ímpar negativo")
    print("")