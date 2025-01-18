Algoritmo "Exercício - Abaixo da média"

Var

   n, i : inteiro
   vet : vetor [0..99] de real
   media, soma : real

Inicio

      escreva("Quantos valores vai ter o vetor? ")
      leia(n)
      escreval

      para i de 0 ate n-1 faca
           escreva("Digite um número: ")
           leia(vet[i])
      fimpara
      
      soma <- 0
      
      para i de 0 ate n-1 faca
           soma <- soma + vet[i]
      fimpara
      
      media <- soma / n
      
      escreval
      escreval("Média do vetor = ", media:5:3)
      escreval("Elementos abaixo da média:")
      
      para i de 0 ate n-1 faca
      
           se vet[i] < media entao
              escreval(vet[i])
           fimse
      
      fimpara

Fimalgoritmo