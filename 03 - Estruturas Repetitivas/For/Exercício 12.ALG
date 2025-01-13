Algoritmo "Exercício - Experiências"

Var

   n, i, quant, R, C, S, total: inteiro
   tipoCobaia : caractere
   pR, pC, pS : real

Inicio

      escreva("Quantos casos de teste serão digitados? ")
      leia(n)
      escreval
      
      R <- 0
      C <- 0
      S <- 0
      
      para i de 1 ate n faca

      escreva("Quantidade de cobaias: ")
      leia(quant)
      escreva("Tipo de cobaia: ")
      leia(tipoCobaia)
      escreval
      
      se tipoCobaia = "R" entao
         R <- R + quant
      senao
         se tipoCobaia = "C" entao
            C <- C + quant
         senao
            S <- S + quant
         fimse
      fimse

      fimpara
      
      total <- R + C + S
      
      pR <- R / total * 100
      pC <- C / total * 100
      pS <- S / total * 100
      escreval
      
      escreval("RELATÓRIO FINAL")
      escreval("Total: ", total)
      escreval("Total de coelhos: ", C)
      escreval("Total de ratos: ", R)
      escreval("Total de sapos: ", S)
      escreval("Percentual de coelhos: ", pC:4:2)
      escreval("Percentual de ratos: ", pR:4:2)
      escreval("Percentual de sapos: ", pS:4:2)



Fimalgoritmo