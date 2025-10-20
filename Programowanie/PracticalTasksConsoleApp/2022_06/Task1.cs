using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp._2022_06
{
    internal class Task1
    {
        public void Task()
        {

        }
    }
}

class Osoba
{
    private int id;
    private string name;
    public static int instanceCount = 0;

    public Osoba()
    {

        instanceCount++;
    }

    public Osoba(int i, string n)
    {
        i = this.id;
        n = this.name;

        instanceCount++;
    }

    public Osoba()
    {

        instanceCount++;
    }

    void WriteName(string arg)
    {
        if (name is null)
        {
            Console.WriteLine("Brak danych");
            return;
        }
            

        Console.WriteLine($"Czesc {arg} mam na imie {name}");
    }

}