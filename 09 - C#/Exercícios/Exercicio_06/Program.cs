//Exercício 06 - Vetores - Soma Vetor

using System;
using System.Globalization;

namespace Primeiro {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int i, N;
            double soma, media;

            Console.Write("Quantos números você vai digitar? ");
            N = int.Parse(Console.ReadLine());

            soma = 0;

            double[] vet = new double[N];

            for(i = 0; i < N; i++){
                Console.Write("Digite um número: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);

                soma = soma + vet[i];
            }

            media = (double) soma / N;
            
            Console.Write("\nValores = ");
            for(i = 0; i < N; i++){
                Console.Write(vet[i].ToString("F1", CI) + " ");
            }

            Console.Write("\nSoma = " + soma.ToString("F2", CI));
            Console.Write("\nMédia = " + media.ToString("F2", CI));
        }
    } 
}