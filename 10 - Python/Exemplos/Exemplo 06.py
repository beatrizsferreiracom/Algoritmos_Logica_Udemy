#Exemplo 06

x = 10
y = 20

print(x)
print(y)

print("")

x = 2.3456

print("{:.2f}".format(x))

print("")

idade: int
salario: float
nome: str
sexo: str

idade = 32
salario = 4560.9
nome = "Maria Silva"
sexo = "F"

print(f"A funcionária {nome}, sexo {sexo}, ganha {salario:.2f} e tem {idade} anos.")

print("A funcionária {:s}, sexo {:s}, ganha {:.2f} e tem {:d} anos.".format(nome, sexo, salario, idade))