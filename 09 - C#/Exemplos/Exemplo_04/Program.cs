//Exemplo 04

using System;
using System.Globalization;

namespace Programa {

    class Program {

        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double x;

            x = 2.3456;
            
            Console.Write(x.ToString("F2", CI));

        }
    }
}