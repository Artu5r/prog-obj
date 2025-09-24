using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AboutObjectConsoleApp;

internal class Point
{
    private int x;
    private int y;

    public Point()
    {
        x = 5;
        y = 8;
    }

    public Point(int a, int b)
    {
        x = a;
        y = b;
    }

    public void Show()
    {
        Console.WriteLine($"({x},{y})");
    }

    public void SetX(int x)
    {
        this.x = x;
    }

    public int GetX()
    {
        return x;
    }

}
