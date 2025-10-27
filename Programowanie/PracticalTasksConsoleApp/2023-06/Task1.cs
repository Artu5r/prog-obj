using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Channels;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp._2023_06
{
    internal class Task4
    {
        public void Task()
        {
            Movie m1 = new Movie();
            m1.SetterTitle("Test");
            string title = m1.GetterTitle();
            int rentNum = m1.GetterRentNum();

            Console.WriteLine(title);
            Console.WriteLine(rentNum);
            m1.Increment();
            rentNum = m1.GetterRentNum();
            Console.WriteLine(rentNum);
        }
    }
}


class Movie
{
    protected string title;
    protected int rentNumber;

    public Movie()
    {
        title = "";
        rentNumber = 0;
    }

    public void SetterTitle(string t)
    {
        title = t;
    }

    public string GetterTitle()
    {
        return title;
    }

    public int GetterRentNum()
    {
        return rentNumber;
    }

    public void Increment()
    {
        rentNumber++;
    }
}



/*
 * nazwa klasy <Movie>
 * pola: <title - przechowuje tutul> 
 *      <rentNumber - przechowuje liczbe wyporzyczen
 * 
 * metody:   <SetterTitle - nic niezwraca>
 *              <GetterTitle - zwraca tytul>
 *              <GetterRentNum - zwraca ilosc wyoporzyczen>
 *              <Increment - nic niezwraca>
 *              
 * informacje:
 * autor:
 * 
 */