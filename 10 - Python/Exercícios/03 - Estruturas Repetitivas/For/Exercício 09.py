#Exercício - Experiências

n = int(input("Quantos casos de teste serão digitados? "))

C = 0
R = 0
S = 0

for i in range(n):
    
    quant = int(input("Quantidade de cobaias: "))
    tipoCobaia = input("Tipo de cobaia: ")

    if tipoCobaia == "C":
        C = C + quant
    elif tipoCobaia == "R":
        R = R + quant
    else:
        S = S + quant

total = C + R + S
pC = C / total * 100
pR = R / total * 100
pS = S / total * 100

print("")
print("Relatório Final:")
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {C}")
print(f"Total de ratos: {R}")
print(f"Total de sapos: {S}")
print(f"Percentual de coelhos:", round(pC,2), "%")
print(f"Percentual de ratos:", round(pR,2), "%")
print(f"Percentual de sapos:", round(pS,2), "%")