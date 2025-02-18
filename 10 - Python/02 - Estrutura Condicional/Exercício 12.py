#Exercício - Tempo de Jogo

horaInicial = int(input("Digite a hora inicial do jogo: "))
horaFinal = int(input("Digite a hora final do jogo: "))

if horaInicial < horaFinal:
    duracao = horaFinal - horaInicial
else:
    duracao = (24 - horaInicial) + horaFinal

print(f"O jogo durou {duracao} hora(s).")