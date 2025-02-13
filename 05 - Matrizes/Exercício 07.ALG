Algoritmo "Exercício - Acima Diagonal"

Var

   ordem, i, j, soma : inteiro
   mat : vetor [0..9, 0..9] de inteiro

Inicio

      escreva("Qual a ordem da matriz? ")
      leia(ordem)
      escreval
      
      para i de 0 ate ordem-1 faca
         para j de 0 ate ordem-1 faca
            escreva("Elemento [", i, ",", j, "]: ")
            leia(mat[i, j])
         fimpara
      fimpara
      escreval
      
      soma <- 0
      
      para i de 0 ate ordem-1 faca
         para j de i+1 ate ordem-1 faca
            soma <- soma + mat[i, j]
         fimpara
      fimpara
      
      escreva("Soma dos elementos acima da diagonal principal = ", soma)


Fimalgoritmo