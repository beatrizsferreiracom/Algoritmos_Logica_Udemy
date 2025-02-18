#Exercício - Baskara

import math

a = float(input("Coeficiente a: "))
b = float(input("Coeficiente b: "))
c = float(input("Coeficiente c: "))

delta = b ** 2 - 4 * a * c

if a == 0 or delta < 0 :
    print("Esta equação não possui raízes reais")
else:
    x1 = (- b + math.sqrt(delta)) / (2 * a)
    x2 = (- b - math.sqrt(delta)) / (2 * a)
    print("X1 = ", round(x1,4))
    print("X2 = ", round(x2,4))