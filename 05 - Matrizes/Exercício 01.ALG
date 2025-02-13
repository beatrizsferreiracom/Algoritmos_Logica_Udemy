Algoritmo "Exemplo 1"

Var

   linha, coluna, i, j : inteiro
   mat : vetor [0..4, 0..4] de inteiro

Inicio

      escreva("Quantas linhas vai ter a matriz? ")
      leia(linha)
      escreva("Quantas colunas vai ter a matriz? ")
      leia(coluna)
      
      para i de 0 ate linha-1 faca
         para j de 0 ate coluna-1 faca
            escreva("Elemento [", i, ",", j, "]: ")
            leia(mat[i, j])
         fimpara
      fimpara

      escreval("Matriz digitada:")
      
      para i de 0 ate linha-1 faca
         para j de 0 ate coluna-1 faca
            escreva(mat[i, j], " ")
         fimpara
         escreval
      fimpara

Fimalgoritmo