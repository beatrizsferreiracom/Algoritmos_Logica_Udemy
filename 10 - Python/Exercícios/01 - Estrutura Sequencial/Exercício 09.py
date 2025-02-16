#Exercício - Medidas

A = float(input("Digite a medida A: "))
B = float(input("Digite a medida B: "))
C = float(input("Digite a medida C: "))

areaQuadrado = A ** 2
areaTriangulo = (A * B) / 2
areaTrapezio = (A + B) / 2 * C

print("Área do quadrado = ", round(areaQuadrado,4))
print("Área do triângulo = ", round(areaTriangulo,4))
print("Área do trapézio = ", round(areaTrapezio,4))