#Exercício - Aumento

salarioAtual = float(input("Digite o salário atual: R$"))

if salarioAtual <= 1000:
    porcentagem = 20
elif salarioAtual <= 3000:
    porcentagem = 15
elif salarioAtual <= 8000:
    porcentagem = 10
else:
    porcentagem = 5

aumento = salarioAtual * (porcentagem / 100)

salarioFinal = salarioAtual + aumento

print("Novo salário = R$", round(salarioFinal,2))
print("Aumento = R$", round(aumento,2))
print("Porcentagem = ", porcentagem, "%")