#Exercício - Coordenadas

x = float(input("Valor de x: "))
y = float(input("Valor de y: "))

if x == 0 and y == 0:
    print("Origem")
elif x == 0:
    print("Eixo y")
elif y == 0:
    print("Eixo x")
elif x > 0 and y > 0:
    print("Q1")
elif x < 0 and y > 0:
    print("Q2")
elif x < 0 and y < 0:
    print("Q3")
else:
    print("Q4")