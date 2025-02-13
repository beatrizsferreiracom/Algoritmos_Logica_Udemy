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
      
      escreva("Soma dos positivos = ", soma)
      escreval
      
      escreva("Escolha uma linha: ")
      leia(linha)
      para j de 0 ate ordem-1 faca
         escreva("Linha escolhida: ", mat[linha, j]:3:1, " ")
      fimpara
      escreval
      
      escreva("Escolha uma coluna: ")
      leia(coluna)
      para i de 0 ate ordem-1 faca
         escreva("Coluna escolhida: ", mat[i, coluna]:3:1, " ")
      fimpara
      escreval


Fimalgoritmo