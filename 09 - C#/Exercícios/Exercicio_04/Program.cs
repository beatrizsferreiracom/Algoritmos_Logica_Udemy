//Exercício 04 - Estrutura Repetitiva (While) - Crescente

using System;

namespace Primeiro {
    class Program {
        static void Main(string[] args) {

            int x, y;

            Console.WriteLine("Digite dois números:");
            x = int.Parse(Console.ReadLine());
            y = int.Parse(Console.ReadLine());

            while(x != y){

                if(x > y){
                    Console.Write("Decrescente");
                }
                else{
                    Console.Write("Crescente");
                }

                Console.WriteLine("\nDigite dois números:");
                x = int.Parse(Console.ReadLine());
                y = int.Parse(Console.ReadLine());
            }
            
            Console.Write("Os números são iguais");
        }
    } 
}