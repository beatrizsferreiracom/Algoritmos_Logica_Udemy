Algoritmo "Exercício - Matriz Geral"

Var

   ordem, i, j, linha, coluna : inteiro
   mat : vetor [0..9, 0..9] de real
   soma : real

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
      
      para i de 0 ate ordem-1 faca
         para j de 0 ate ordem-1 faca
            se mat[i, j] > 0 entao
               soma <- soma + mat[i, j]
            fimse
         fimpara
      fimpara
      
      escreval("Soma dos positivos = ", soma)
      escreval
      
      escreva("Escolha uma linha: ")
      leia(linha)
      
      escreva("Linha escolhida: ")
      para j de 0 ate ordem-1 faca
         escreva(mat[linha, j]:3:1, " ")
      fimpara
      escreval
      
      escreval
      escreva("Escolha uma coluna: ")
      leia(coluna)
      
      escreva("Coluna escolhida: ")
      para i de 0 ate ordem-1 faca
         escreva(mat[i, coluna]:3:1, " ")
      fimpara
      escreval
      
      escreval
      escreval("Diagonal principal:")
      para i de 0 ate ordem-1 faca
         escreva(mat[i, i], " ")
      fimpara
      escreval
      
      escreval
      para i de 0 ate ordem-1 faca
         para j de 0 ate ordem-1 faca
            se mat[i, j] < 0 entao
               mat[i, j] <- Exp(mat[i, j], 2)
            fimse
         fimpara
      fimpara

      escreval("Matriz alterada:")
      para i de 0 ate ordem-1 faca
         para j de 0 ate ordem-1 faca
            escreva(mat[i,j])
         fimpara
         escreval
      fimpara
      
Fimalgoritmo