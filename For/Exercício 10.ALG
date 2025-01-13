Algoritmo "Exercício - Divisão"

Var

   n, i : inteiro
   x, y, divisao : real

Inicio

      escreva("Quantos casos voce vai digitar? ")
      leia(n)
      escreval

      para i de 1 ate n faca

           escreva("Entre com o numerador: ")
           leia(x)
           escreva("Entre com o denominador: ")
           leia(y)

           se y = 0 entao
              escreval("Divisão impossível!")
              escreval
           senao
              divisao <- x / y
              escreval ("Divisão = ", divisao:4:2)
              escreval
           fimse

      fimpara

Fimalgoritmo