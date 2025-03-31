//Exercício 05 - Estrutura Repetitiva (For) - Soma ímpares

using System;

namespace Primeiro {
    class Program {
        static void Main(string[] args) {

            int i, x, y, soma, troca;

            Console.WriteLine("Digite dois números:");
            x = int.Parse(Console.ReadLine());
            y = int.Parse(Console.ReadLine());

            soma = 0;

            if(x > y){
                troca = x;
                x = y;
                y = troca;
            }

            for(i = x; i < y; i++){

                if(i % 2 != 0){
                    soma = soma + i;
                }
            }
            
            Console.Write("Soma dos ímpares = " + soma);
        }
    } 
}