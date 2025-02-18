#Exercício - Dardo

print("Digite as três distâncias:")
a = float(input(""))
b = float(input(""))
c = float(input(""))

if a > b and a > c:
    maior = a
elif b > c:
    maior = b
else:
    maior = c

print("Maior distância = ", maior)