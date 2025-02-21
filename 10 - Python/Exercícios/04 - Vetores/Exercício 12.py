#Exercício - Comerciante

N = int(input("Serão digitados dados de quantos produtos? "))

nome = [0] * N
precoCompra = [0] * N
precoVenda = [0] * N

totalCompra = 0
totalVenda = 0

for i in range(N):

    print(f"Produto {i+1}:")
    nome[i] = input("Nome: ")
    precoCompra[i] = float(input("Preço de compra: "))
    precoVenda[i] = float(input("Preço de venda: "))
    print("")

    totalCompra = totalCompra + precoCompra[i]
    totalVenda = totalVenda + precoVenda[i]

abaixo = 0
entre = 0
acima = 0

for i in range(N):

    lucro = precoVenda[i] - precoCompra[i]
    porc = lucro * 100 / precoCompra[i]

    if porc < 10:
        abaixo = abaixo + 1
    elif porc <= 20:
        entre = entre + 1
    else:
        acima = acima + 1

totalLucro = totalVenda - totalCompra

print("Relatório:")
print("Lucro abaixo de 10%:", abaixo)
print("Lucro entre 10% e 20%:", entre)
print("Lucro acima de 20%:", acima)
print("Valor total de compra:", round(totalCompra,2))
print("Valor total de venda:", round(totalVenda,2))
print("Lucro total:", round(totalLucro,2))