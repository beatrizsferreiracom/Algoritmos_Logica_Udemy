Algoritmo "Exercício - Maior posição"

Var

   i, n, posicao : inteiro
   maior : real
   vet : vetor [0..9] de real

Inicio

      escreva("Quantos números você vai digitar? ")
      leia(n)
      escreval
      
      para i de 0 ate n-1 faca

           escreva("Digite um número: ")
           leia(vet[i])

      fimpara
      
      maior  <- vet[0]
      posicao <- 0
      
      para i de 1 ate n-1 faca
      
             se maior < vet[i] entao
                maior <- vet[i]
                posicao <- i
             fimse
      
      fimpara
      
      escreval
      escreval("Maior valor = ", maior)
      escreval("Posição do maior valor = ", posicao)

Fimalgoritmo