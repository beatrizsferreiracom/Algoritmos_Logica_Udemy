Algoritmo "Exercício - Comerciante"

Var

   n, i, abaixo, entre, acima : inteiro
   nome : vetor [0..99] de caractere
   precoCompra : vetor [0..99] de real
   precoVenda : vetor [0..99] de real
   porc, lucro, totalCompra, totalVenda, totalLucro : real

Inicio

      escreva("Serão digitados dados de quantos produtos? ")
      leia(n)
      escreval
      
      para i de 0 ate n-1 faca

           escreval("Produto ", i+1, ":")
           escreva("Nome: ")
           leia(nome[i])
           escreva("Preço de compra: ")
           leia(precoCompra[i])
           escreva("Preço de venda: ")
           leia(precoVenda[i])
           escreval

      fimpara
      
      abaixo <- 0
      entre <- 0
      acima <- 0
      
      para i de 0 ate n-1 faca
      
           lucro <- precoVenda[i] - precoCompra[i]
           porc <- lucro * 100 / precoCompra[i]
           
           se porc < 10 entao
              abaixo <- abaixo + 1
           senao
              se porc <= 20 entao
                 entre <- entre + 1
              senao
                 acima <- acima + 1
              fimse
           fimse
      
      fimpara
      
      totalCompra <- 0
      totalVenda <- 0
      
      para i de 0 ate n-1 faca
      
           totalCompra <- totalCompra + precoCompra[i]
           totalVenda <- totalVenda + precoVenda[i]
      
      fimpara
      
      totalLucro <- totalVenda - totalCompra
      
      escreval("Relatório:")
      escreval("Lucro abaixo de 10%: ", abaixo)
      escreval("Lucro entre 10% e 20%: ", entre)
      escreval("Lucro acima de 20%: ", acima)
      escreval("Valor total de compra: ", totalCompra:4:2)
      escreval("Valor total de venda: ", totalVenda:4:2)
      escreval("Lucro total: ", totalLucro:4:2)

Fimalgoritmo