#Exercício - Notas

nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))

notaFinal = nota1 + nota2

if notaFinal < 60:
    print("Nota final = ", notaFinal)
    print("Reprovado")
else:
    print("Nota final = ", notaFinal)