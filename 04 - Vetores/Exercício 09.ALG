Algoritmo "Exercício - Média Pares"

Var

   n, i, soma, pares : inteiro
   vet : vetor [0..9] de inteiro
   media : real

Inicio

      escreva("Quantos valores vai ter o vetor? ")
      leia(n)
      escreval
      
      para i de 0 ate n-1 faca
           escreva("Digite um número: ")
           leia(vet[i])
      fimpara
      
      escreval
      
      soma <- 0
      pares <- 0
      
      para i de 0 ate n-1 faca
      
           se vet[i] % 2 = 0 entao
              soma <- soma + vet[i]
              pares <- pares + 1
           fimse
      
      fimpara
      
      se pares = 0 entao
         escreval("Nenhum número par")
      senao
         media <- soma / pares
         escreval("Média dos pares = ", media:3:1)
      fimse
      
Fimalgoritmo