Algoritmo "Exercício - Mais velho"

Var

   n, i, maisVelho, posicao: inteiro
   nome : vetor [0..9] de caractere
   idade : vetor [0..9] de inteiro

Inicio

      escreva("Quantas pessoas você vai digitar? ")
      leia(n)
      escreval

      para i de 0 ate n-1 faca

           escreval("Dados da ", i+1, "º pessoa:")
           escreva("Nome: ")
           leia(nome[i])
           escreva("Idade: ")
           leia(idade[i])
           escreval

      fimpara

      maisVelho <- idade[0]
      posicao <- 0

      para i de 1 ate n-1 faca

             se maisVelho < idade[i] entao
                maisVelho <- idade[i]
                posicao <- i
             fimse

      fimpara
      
      escreval("Pessoa mais velha: ", nome[posicao])

Fimalgoritmo