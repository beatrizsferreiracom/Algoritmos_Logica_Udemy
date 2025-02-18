#Exercício - Combustível

alcool = 0
gasolina = 0
diesel = 0

codigo = int(input("Informe um código (1, 2, 3) ou 4 para parar: "))

while codigo != 4:
    if codigo == 1:
        alcool = alcool + 1
    elif codigo == 2:
        gasolina = gasolina + 1
    elif codigo == 3:
        diesel = diesel + 1
        
    codigo = int(input("Informe um código (1, 2, 3) ou 4 para parar: "))

print("")
print("Muito obrigado!")
print("Álcool: ", alcool)
print("Gasolina: ", gasolina)
print("Diesel: ", diesel)