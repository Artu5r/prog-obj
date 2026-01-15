using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp._2025_01
{
    internal class Task5
    {
        public void Task()
        {
            WashingMachine washingMachine = new WashingMachine();
            VacuumCleaner vacuumCleaner = new VacuumCleaner();

            Console.WriteLine("Podaj numer prania 1..12");
            string input = Console.ReadLine();
            int enteredNumber;

            if (int.TryParse(input, out enteredNumber))
            {
                washingMachine.SetProgram(enteredNumber);
            }
            else
            {
                washingMachine.SetProgram(-1);
            }

            vacuumCleaner.TurnOn();
            vacuumCleaner.TurnOn();
            vacuumCleaner.TurnOn();

            vacuumCleaner.DisplayMessage("Odkurzacz wyładował się");

            vacuumCleaner.TurnOff();
        }
    }
}

public class Device
{
    public void DisplayMessage(string message)
    {
        Console.WriteLine(message);
    }
}

public class WashingMachine : Device
{
    private int programNumber = 0;

    public int SetProgram(int number)
    {
        if (number >= 1 && number <= 12)
        {
            this.programNumber = number;
            DisplayMessage("Program został ustawiony");
        }
        else
        {
            this.programNumber = 0;
            DisplayMessage("Podano niepoprawny numer programu");
        }
        return this.programNumber;
    }
}

public class VacuumCleaner : Device
{
    private bool isOn = false;

    public void TurnOn()
    {
        if (!this.isOn)
        {
            this.isOn = true;
            DisplayMessage("Odkurzacz włączono");
        }
    }

    public void TurnOff()
    {
        if (this.isOn)
        {
            this.isOn = false;
            DisplayMessage("Odkurzacz wyłączono");
        }
    }
}
