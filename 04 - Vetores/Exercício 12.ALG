Algoritmo "Exercício - Dados pessoas"

Var

   n, i, mulher, homem : inteiro
   genero : vetor [0..99] de caractere
   altura : vetor [0..99] de real
   media, soma, maior, menor : real

Inicio

      escreva("Quantas pessoas serão digitadas? ")
      leia(n)
      escreval
      
      para i de 0 ate n-1 faca
      
           escreva("Altura da ", i+1, "º pessoa: ")
           leia(altura[i])
           escreva("Gênero da ", i+1, "º pessoa: ")
           leia(genero[i])
           escreval
      
      fimpara
      
      maior <- altura[0]
      menor <- altura[0]
      mulher <- 0
      homem <- 0
      soma <- 0
      
      para i de 1 ate n-1 faca

           se menor > altura[i] entao
              menor <- altura[i]
           fimse

      fimpara
      escreval("Menor altura = ", menor:2:2)
      
      para i de 1 ate n-1 faca

           se maior < altura[i] entao
              maior <- altura[i]
           fimse

      fimpara
      escreval("Maior altura = ", maior:2:2)
      
      para i de 0 ate n-1 faca

           se (genero[i] = "F") ou (genero[i] = "f") entao
              soma <- soma + altura[i]
              mulher <- mulher + 1
           fimse

      fimpara
      
      media <- soma / mulher
      escreval("Média das alturas das mulheres = ", media:2:2)
      
      para i de 0 ate n-1 faca
      
           se (genero[i] = "M") ou (genero[i] = "m") entao
              homem <- homem + 1
           fimse
      
      fimpara
      
      escreval("Número de homens = ", homem)


Fimalgoritmo