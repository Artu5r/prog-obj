using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Styczen2023_1
{
    internal class Task1
    {
        public void Task()
        {
            uint NWD(uint a, uint b)
            {
                while (a != b)
                {
                    if (a > b)
                        a = a - b;
                    else
                        b = b - a;
                }
                return a;
            }

            Console.WriteLine("Podaj a: ");
            uint a = uint.Parse(Console.ReadLine());
            Console.WriteLine("Podaj b: ");
            uint b = uint.Parse(Console.ReadLine());
            uint nwd = NWD(a, b);
            Console.WriteLine($"NWD = {nwd}");
        }
    }
}

/************************
nazwa funkcji:          <NWD>
opis funkcji:           <szuka najwiekszego wspulnego dzielnika dla w podanych liczb i go zwraca>
parametry:              <a - typ uint
                        b - typ uint>

zwracany typ i opis:    <uint zwracany jest najwiekszy wspulny dzielkik
autor:                  <>
*************************/