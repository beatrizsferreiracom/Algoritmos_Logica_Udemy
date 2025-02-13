Algoritmo "Exercício - Diagonal Negativos"

Var

   ordem, i, j, negativos : inteiro
   mat : vetor [0..9, 0..9] de inteiro

Inicio

      escreva("Qual a ordem da matriz? ")
      leia(ordem)
      escreval
      
      para i de 0 ate ordem-1 faca
         para j de 0 ate ordem-1 faca
            escreva("Elemento [", i, ",", j, "]: ")
            leia(mat[i,j])
         fimpara
      fimpara
      escreval
      
      escreval("Diagonal principal: ")
      para i de 0 ate ordem-1 faca
         escreva(mat[i, i], " ")
      fimpara
      escreval
      escreval
      
      negativos <- 0
      
      para i de 0 ate ordem-1 faca
         para j de 0 ate ordem-1 faca
            se mat[i, j] < 0 entao
               negativos <- negativos + 1
            fimse
         fimpara
      fimpara
      
      escreva("Quantidade de negativos = ", negativos)

Fimalgoritmo