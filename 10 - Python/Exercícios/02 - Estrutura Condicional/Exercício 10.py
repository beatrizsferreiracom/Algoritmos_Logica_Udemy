#Exercício - Múltiplos

print("Digite dois números inteiros: ")
a = int(input(""))
b = int(input(""))

if a % b == 0 or b % a == 0:
    print("Os números são múltiplos.")
else:
    print("Os números não são múltiplos.")