Algoritmo "Exemplo - Repita Até"

Var

   C, F : real
   comando : caractere

Inicio


      repita
      
      escreva("Digite a temperatura em Celsius: ")
      leia(C)

      F <- 9 * C / 5 + 32
      
      escreval("Equivalente em Farenheit: ", F:3:1)
      escreval
      
      escreva("Deseja repetir (s/n)? ")
      leia(comando)
      escreval
      
      ate (comando = "N") ou (comando = "n")
      
Fimalgoritmo