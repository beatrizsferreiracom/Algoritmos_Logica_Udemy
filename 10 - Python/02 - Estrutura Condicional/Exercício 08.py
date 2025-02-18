#Exercício - Temperatura

escala = input("Digite a escala (F/C): ")

if escala == "F":
    F = float(input("Digite a temperatura em Fahrenheit: "))
    C = 5/9 * (F - 32)
    print("Temperatura em Celsius: ", round(C,2), "°C")
elif escala == "C":
    C = float(input("Digite a temperatura em Celsius: "))
    F = C * 9 / 5 + 32
    print("Temperatura em Fahrenheit: ", round(F,2), "°F")
else:
    print("Valor inválido!")