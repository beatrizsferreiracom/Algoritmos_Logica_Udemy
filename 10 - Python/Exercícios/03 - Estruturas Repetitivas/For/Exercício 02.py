#Exercício - Soma Ímpares

soma = 0
troca = 0

print("Digite dois números:")
x = int(input(""))
y = int(input(""))

if x > y:
    troca = x
    x = y
    y = troca

for i in range(x+1, y):
    if i % 2 != 0:
        soma = soma + i
    
print("Soma dos ímpares =", soma)