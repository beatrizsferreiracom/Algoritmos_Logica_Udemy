#Exercício - Validação de Nota

n1 = float(input("Digite a primeira nota: "))

while n1 < 0 or n1 > 10:
    print("Valor inválido! Tente novamente: ", end="")
    n1 = float(input(""))

n2 = float(input("Digite a segunda nota: "))

while n2 < 0 or n2 > 10:
    print("Valor inválido! Tente novamente: ", end="")
    n2 = float(input(""))

media = (n1 + n2) / 2

print("Média = ", round(media,2))