//Exercício 01 - Estrutura Sequencial - Retângulo

using System;
using System.Globalization;

namespace Primeiro {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double baseR, altura, area, perimetro, diagonal;

            Console.Write("Base do retângulo: ");
            baseR = double.Parse(Console.ReadLine(), CI);

            Console.Write("Altura do retângulo: ");
            altura = double.Parse(Console.ReadLine(), CI);

            area = baseR * altura;
            perimetro = (baseR + altura) * 2;
            diagonal = Math.Sqrt(Math.Pow(baseR, 2) + Math.Pow(altura, 2));
        
            Console.WriteLine("\nÁrea = " + area.ToString("F4", CI));
            Console.WriteLine("Perímetro = " + perimetro.ToString("F4", CI));
            Console.WriteLine("Diagonal = " + diagonal.ToString("F4", CI));
        }
    } 
}