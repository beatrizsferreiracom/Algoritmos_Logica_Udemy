Algoritmo "Exerc�cio - Temperatura"

Var

   escala : caractere
   F, C : real


Inicio

      escreva ("Digite a escala (C/F): ")
      leia (escala)
      
      se escala = "F" entao
         escreva ("Digite a temperatura em Fahrenheit: ")
         leia (F)
         C <- 5/9 * (F - 32)
         escreval
         escreval ("Temperatura em Celsius: ", C:5:2, "�")
      senao
           se escala = "C" entao
              escreva ("Digite a temperatura em Celsius: ")
              leia (C)
              F <- C * 9 / 5 + 32
              escreval
              escreval ("Temperatura em Fahrenheit: ", F:5:2, "�")
           senao
                escreval ("Valor inv�lido!")
           fimse
      fimse
      
Fimalgoritmo