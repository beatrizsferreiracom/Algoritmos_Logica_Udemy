Algoritmo "Exercício - Soma vetores"

Var

   n, i : inteiro
   a : vetor [0..99] de inteiro
   b : vetor [0..99] de inteiro
   c : vetor [0..99] de inteiro


Inicio

      escreva("Quantos valores vai ter cada vetor? ")
      leia(n)
      escreval
      
      escreval("Digite os valores do vetor A: ")
      para i de 0 ate n-1 faca
           leia(a[i])
      fimpara
      
      escreval
      
      escreval("Digite os valores do vetor B: ")
      para i de 0 ate n-1 faca
           leia(b[i])
      fimpara
      
      escreval
      
      escreval("Vetor resultante:")
      
      para i de 0 ate n-1 faca
           c[i] <- a[i] + b[i]
           escreval(c[i])
      fimpara

Fimalgoritmo