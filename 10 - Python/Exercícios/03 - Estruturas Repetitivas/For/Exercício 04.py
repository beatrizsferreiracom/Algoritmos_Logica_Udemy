#Exercício - Dentro Fora

dentro = 0
fora = 0

n = int(input("Quantos números você vai digitar? "))

for i in range(n):
    
    x = int(input("Digite um número: "))

    if x >= 10 and x <= 20:
        dentro = dentro + 1
    else:
        fora = fora + 1

print(f"{dentro} dentro")
print(f"{fora} fora")