#Exercício - Lanchonete

codigo = int(input("Código do produto comprado: "))
quantidade = int(input("Quantidade comprada: "))

if codigo == 1:
    valor = 5.00 * quantidade
elif codigo == 2:
    valor = 3.50 * quantidade
elif codigo == 3:
    valor = 4.80 * quantidade
elif codigo == 4:
    valor = 8.90 * quantidade
elif codigo == 5:
    valor = 7.32 * quantidade
else:
    print("Código inválido!")

print("Valor a pagar: R$", valor)