using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Metadata.Ecma335;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp._2022_06
{
    internal class Task3
    {
        public void Task()
        {
            Osoba osoba = new Osoba(1,"Piotr");
            osoba.WriteName("Jan");
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
        id = 0;
        name = "";
    }

    public Osoba(int i, string n)
    {
        id = i;
        name = n;
        instanceCount++;
    }

    public Osoba(Osoba copy)
    {
        instanceCount++;
        copy.id = id;
        copy.name = name;
    }

    public void WriteName(string arg)
    {
        if (name == "")
        {
            Console.WriteLine("Brak danych");
            return;
        }

        Console.WriteLine($"Czesc {arg} mam na imie {name}");
    }
}

/*





*/