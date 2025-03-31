//Exercício 07 - Matrizes - Diagonal Negativos

using System;
using System.Globalization;

namespace Primeiro {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int i, j, N, negativos;

            Console.Write("Qual a ordem da matriz? ");
            N = int.Parse(Console.ReadLine());

            int[,] mat = new int[N, N];

            negativos = 0;

            for(i = 0; i < N; i++){
                for(j = 0; j < N; j++){
                    Console.Write("Elemento [" + i + ", " + j + "]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());

                    if(mat[i, j] < 0){
                        negativos++;
                    }
                }
            }
            
            Console.WriteLine("\nDiagonal principal:");
            for(i = 0; i < N; i++){
                Console.Write(mat[i, i] + " ");
            }

            Console.Write("\nQuantidade de negativos = " + negativos);
        }
    } 
}