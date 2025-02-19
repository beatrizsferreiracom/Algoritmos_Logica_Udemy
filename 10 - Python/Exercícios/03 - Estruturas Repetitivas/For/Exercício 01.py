#Exercício - Tabuada

multi = 0

numero = int(input("Deseja a tabuada para qual valor? "))

for i in range(1, 11):
    
    multi = numero * i
    print(f"{numero} x {i} =", multi)