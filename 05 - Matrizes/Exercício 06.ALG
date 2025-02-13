Algoritmo "Exercício - Soma Matrizes"

Var

   linha, coluna, i, j : inteiro
   A : vetor [0..9, 0..9] de inteiro
   B : vetor [0..9, 0..9] de inteiro
   C : vetor [0..9, 0..9] de inteiro

Inicio

      escreva("Quantas linhas vai ter cada matriz? ")
      leia(linha)
      escreva("Quantas colunas vai ter cada matriz? ")
      leia(coluna)
      escreval
      
      escreval("Digite os valores da matriz A:")
      para i de 0 ate linha-1 faca
         para j de 0 ate coluna-1 faca
            escreva("Elemento [", i, ",", j, "]: ")
            leia(A[i, j])
         fimpara
      fimpara
      
      escreval("Digite os valores da matriz B:")
      para i de 0 ate linha-1 faca
         para j de 0 ate coluna-1 faca
            escreva("Elemento [", i, ",", j, "]: ")
            leia(B[i, j])
         fimpara
      fimpara
      escreval
      
      para i de 0 ate linha-1 faca
         para j de 0 ate coluna-1 faca
              C[i, j] <- A[i, j] + B[i, j]
         fimpara
      fimpara
      
      escreval("Matriz soma:")
      para i de 0 ate linha-1 faca
         para j de 0 ate coluna-1 faca
            escreva(C[i, j], " ")
         fimpara
         escreval
      fimpara

Fimalgoritmo