#Exercício - Senha Fixa

senha = input("Digite a senha: ")

while senha != "2002":
    print("Senha inválida! Tente novamente: ", end="")
    senha = input("")

print("Acesso permitido!")