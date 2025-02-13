Algoritmo "Exercício - Negativos Matriz"

Var

   linha, coluna, i, j : inteiro
   mat : vetor [0..9, 0..9] de inteiro

Inicio

      escreva("Qual a quantidade de linhas da matriz? ")
      leia(linha)
      escreva("Qual a quantidade de colunas da matriz? ")
      leia(coluna)
      escreval
      
      para i de 0 ate linha-1 faca
         para j de 0 ate coluna-1 faca
            escreva("Elemento [", i, ",", j, "]: ")
            leia(mat[i, j])
         fimpara
      fimpara
      escreval
      
      escreval("Valores negativos: ")
      para i de 0 ate linha-1 faca
         para j de 0 ate coluna-1 faca
            se mat[i, j] < 0 entao
               escreval(mat[i, j])
            fimse
         fimpara
      fimpara
      



Fimalgoritmo