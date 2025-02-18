#Exercício - Troco verificado

preco = float(input("Preço unitário do produto: R$ "))
quantidade = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))

troco = dinheiro - (preco * quantidade)

if troco >= 0:
    print("Troco = R$", troco)
else:
    print(f"Dinheiro insuficiente. Faltam R$ {abs(troco)}")