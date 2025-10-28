using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Styczen2023_1
{
    internal class Task2
    {
        public void Task()
        {
            Note n1 = new Note("Lista zakupow", "slodycze, banany");
            Note n2 = new Note("Sprawdziany", "polski, matma");

            n1.TitleandContains();
            n1.Diag();

            n2.TitleandContains();
            n2.Diag();
        }
    }
}

internal class Note
{
    private static int noteCounter = 0;
    private int uniqID;

    protected string title;
    protected string contains;

    public Note(string t, string c)
    {
        noteCounter++;
        uniqID = noteCounter;
        title = t;
        contains = c;
    }

    public void TitleandContains()
    {
        Console.WriteLine($"Tylul: {title}");
        Console.WriteLine($"Tresc: {contains}");
    }

    public void Diag()
    {
        Console.WriteLine($"ID: {uniqID}; Licznik: {noteCounter}; Tytul: {title}; Tresc: {contains}");
    }
}

/************************
klasa:          <Note>
opis:           <zawira 2 metody 1 wypisuje wytul i tresc notaki a 2 wypisuje info daignostyczne>
pola:           <noteCounter - jest liczkiem notatek>
                <uniqID - przechowuej unikalne id notatki>
autor:          <>
*************************/