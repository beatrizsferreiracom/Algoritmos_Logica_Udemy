#Exercício - Operadora

minutos = int(input("Digite a quantidade de minutos: "))

planoBasico = 50

if minutos <= 100:
    print("Valor a pagar: R$", planoBasico)
else:
    excedente = planoBasico + 2 * (minutos - 100)
    print("Valor a pagar:  R$", excedente)