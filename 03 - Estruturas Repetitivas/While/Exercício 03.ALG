Algoritmo "Exerc�cio - M�dia Idades"

Var

   idade, soma, contador : inteiro
   media : real

Inicio

      soma <- 0
      contador <- 0

      escreval ("Digite as idades: ")
      leia (idade)

      enquanto idade >= 0 faca
      
         soma <- soma + idade
         contador <- contador + 1

         leia (idade)
      
      fimenquanto
      
      se contador = 0 entao
          escreval ("Imposs�vel calcular")
      senao
         media <- soma / contador
         escreval ("A m�dia das idades � = ", media:4:2)
      fimse
      

Fimalgoritmo