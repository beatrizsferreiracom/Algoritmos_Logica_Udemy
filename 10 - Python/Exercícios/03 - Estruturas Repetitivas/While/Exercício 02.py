#Exercício - Média Idades

soma = 0
contador = 0

print("Digite as idades:")
idade = int(input(""))

while idade >= 0:

    soma = soma + idade
    contador = contador + 1

    idade = int(input(""))

if contador == 0:
    print("Impossível calcular!")
else:
    media = soma / contador
    print("A média das idades é = ", round(media,2))