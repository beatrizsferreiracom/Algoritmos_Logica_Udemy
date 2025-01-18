Algoritmo "Exercício - Alturas"

Var

   n, i, menor : inteiro
   media, soma, porc : real
   nome : vetor [0..9] de caractere
   idade : vetor [0..9] de inteiro
   altura : vetor [0..9] de real

Inicio

      soma <- 0
      menor <- 0

      escreva("Quantas pessoas serão digitadas? ")
      leia(n)
      escreval
    
      para i de 0 ate n-1 faca
      
           escreval("Dados da ", i+1, "º pessoa:")
           escreva("Nome: ")
           leia(nome[i])
           escreva("Idade: ")
           leia(idade[i])
           escreva("Altura: ")
           leia(altura[i])
           escreval
      
      fimpara
      
      para i de 0 ate n-1 faca
      
           soma <- soma + altura[i]
           media <- soma / n
      
      fimpara
      
      escreval("Altura média : ", media:4:2)
      
      para i de 0 ate n-1 faca
      
           se idade[i] < 16 entao
              menor <- menor + 1
           fimse
      
      fimpara
      
      porc <- menor * 100 / n
      
      escreval("Pessoas com menos de 16 anos: ", porc, "%")
      
      para i de 0 ate n-1 faca

           se idade[i] < 16 entao
              escreval(nome[i])
           fimse

      fimpara
      
Fimalgoritmo