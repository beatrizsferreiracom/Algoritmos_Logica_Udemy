Algoritmo "Exercício - Aprovados"

Var

   n, i : inteiro
   nome : vetor [0..9] de caractere
   nota1 : vetor [0..9] de real
   nota2 : vetor [0..9] de real
   media : real

Inicio

      escreva("Quantos alunos serão digitados? ")
      leia(n)
      escreval
      
      para i de 0 ate n-1 faca
      
           escreval("Digite nome, primeira e segunda nota do ", i+1, "º aluno:")
           leia(nome[i])
           leia(nota1[i])
           leia(nota2[i])
           escreval

      fimpara
      
      escreval
      escreval("Alunos aprovados:")

      para i de 0 ate n-1 faca
      
           media <- (nota1[i] + nota2[i]) / 2

           se media >= 6 entao
              escreval(nome[i])
           fimse
      
      fimpara

Fimalgoritmo