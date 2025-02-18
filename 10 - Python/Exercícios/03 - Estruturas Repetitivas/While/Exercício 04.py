#Exercício - Quadrante

print("Digite os valores das coordenas x e y:")
x = float(input(""))
y = float(input(""))

while x != 0 and y != 0:
    if x > 0 and y > 0:
        print("Quadrante 1")
    elif x < 0 and y > 0:
        print("Quadrante 2")
    elif x < 0 and y < 0:
        print("Quadrante 3")
    else:
        print("Quadrante 4")
    print("")
    print("Digite os valores das coordenas x e y:")
    x = float(input(""))
    y = float(input(""))