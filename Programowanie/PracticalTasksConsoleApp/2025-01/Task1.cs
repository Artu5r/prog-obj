using PracticalTasksConsoleApp._2025_01;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


/*************************************
 Nazwa: Komunikat
 Opis: Wyświetla w konsoli przekazywany komunikat tekstowy
 parametry: tresc
 zwracany typ i opis: brak
*********************************/

/********************************
 Nazwa: UstawProgram
 Opis: Ustawia numer programu prania od (1-12)
 parametry: numer 
 zwracany typ i opis: int 
**********************************/


/*************************************
Nazwa: On
Opis: Włącza odkurzacz, wyświetla odpowiedni komunikat
parametry: brak
zwracany typ i opis: brak
**********************************/

/***********************************
Nazwa: Off
Opis: Wyłącza odkurzacz oraz wyświetla odpowiedni komunikat
parametry: brak
zwracany typ i opis: brak
*************************************/

namespace PracticalTasksConsoleApp._2025_01
{

    internal class Task5
    {
        public void Task()
        {
            WashingMachine w1 = new WashingMachine();
            Vacuum v1 = new Vacuum();
            Console.Write("Podaj numer prania 1..12: ");
            int number;
            bool correct = int.TryParse(Console.ReadLine(), out number);
            if (!correct) number = 0;
            pralka.UstawProgram(numer);
            Vacuum.On();
            Vacuum.On();
            Vacuum.On();
            Vacuum.Komunikat("Odkurzacz wyładował się");
            Vacuum.Off();
        }
    }



    class MachineDevice
    {
        public void Announcement(string tresc)
        {
            Console.WriteLine(tresc);
        }
    }

    class WashingMachine : MachineDevice
    {
        private int programNumber = 0;

        public int setProgram(int number)
        {
            if (number >= 1 && number <= 12)
            {
                programNumber = number;
                Announcement("Program został ustawiony");
            }
            else
            {
                Announcement("Podano niepoprawny numer programu");
                programNumber = 0;
            }

            return programNumber;
        }
    }

    class Vacuum : MachineDevice
    {
        private bool condition = false;

        public void On()
        {
            if (!condition)
            {
                stan = true;
                Announcement("Odkurzacz włączono");
            }
        }



        public void Off()
        {
            if (condition)
            {
                stan = false;
                Announcement("Odkurzacz wyłączono");
            }
        }
    }
}
