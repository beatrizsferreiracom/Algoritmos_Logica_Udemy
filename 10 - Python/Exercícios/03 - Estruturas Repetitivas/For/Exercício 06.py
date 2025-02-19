#Exercício - Média Ponderada

n = int(input("Digite quantos casos você vai digitar: "))

for i in range(n):

    print("Digite três números:")
    a = float(input(""))
    b = float(input(""))
    c = float(input(""))

    media = (a * 2 + b * 3 + c * 5) / 10
    print("Média =", round(media,1))