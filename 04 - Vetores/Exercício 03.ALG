Algoritmo "Exercício - Soma Vetor"

Var

   n, i : inteiro
   vet : vetor [0..9] de real
   soma, media : real

Inicio

      soma <- 0
      media <- 0

      escreva("Quantos números você vai digitar? ")
      leia(n)
      escreval

      para i de 0 ate n-1 faca

           escreva("Digite um número: ")
           leia(vet[i])

      fimpara

      escreval
      escreva("Valores = ")
      
      para i de 0 ate n-1 faca
           escreva(vet[i]:3:1, " | ")
      fimpara
      
      para i de 0 ate n-1 faca
           soma <- soma + vet[i]
      fimpara
      
      escreval
      escreval("Soma = ", soma:3:1)
      
      para i de 0 ate n-1 faca
           media <- soma / n
      fimpara
      
      escreval("Média = ", media:3:1)

Fimalgoritmo