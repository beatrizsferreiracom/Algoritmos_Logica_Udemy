Algoritmo "Exercício - Soma Linhas"

Var

   linha, coluna, i, j : inteiro
   mat : vetor [0..9, 0..9] de real
   vet : vetor [0..9] de real


Inicio

      escreva("Qual a quantidade de linhas da matriz? ")
      leia(linha)
      escreva("Qual a quantidade de colunas da matriz? ")
      leia(coluna)
      escreval
      
      para i de 0 ate linha-1 faca
         escreval("Digite os elementos da ", i+1, "º linha: ")
         para j de 0 ate coluna-1 faca
            leia(mat[i, j])
         fimpara
      fimpara
      escreval
      
      para i de 0 ate linha-1 faca
         vet[i] <- 0
         para j de 0 ate coluna-1 faca
            vet[i] <- vet[i] + mat[i, j]
         fimpara
      fimpara
      
      escreval("Vetor gerado: ")
      para i de 0 ate linha-1 faca
         escreval(vet[i])
      fimpara

Fimalgoritmo