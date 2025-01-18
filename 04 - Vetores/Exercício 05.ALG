Algoritmo "Exercício - Números pares"

Var

   n, i, quant : inteiro
   vet : vetor [0..9] de inteiro

Inicio

      quant <- 0

      escreva("Quantos números você vai digitar? ")
      leia(n)
      escreval

      para i de 0 ate n-1 faca

           escreva("Digite um número: ")
           leia(vet[i])

      fimpara

      escreval
      escreval("Números pares:")

      para i de 0 ate n-1 faca
      
           se vet[i] % 2 = 0 entao
              escreva(vet[i], " |")
              quant <- quant + 1
           fimse
           
      fimpara
      
      escreval
      escreval

      escreval("Quantidade de pares = ", quant)

Fimalgoritmo