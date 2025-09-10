Console.Write("Hello world\n");
Console.WriteLine("Hello, World!");

string name = "Jan";
string surname = "Kowalski";
Console.WriteLine("Witaj " + name + " " + surname + " " + "tutaj!");
Console.WriteLine("Witaj {0} {1} tutaj!", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj!");

Console.WriteLine("Predkosc 40km\\h");
Console.WriteLine(@"Predkosc 40km\h");

int firstNumber = 5;
int secoundNumber = firstNumber;
secoundNumber++;
Console.WriteLine($"Pierwsza liczba to {firstNumber}");
Console.WriteLine($"Druga liczba to {secoundNumber}");

//-------------------------------------------------------------------

void ParametrV1(int p)
{
    Console.WriteLine($"Parametr w ParametrV1 {p}");
    p++;
    Console.WriteLine($"Parametr w ParametrV1 {p}");
}

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
ParametrV1(firstNumber);
Console.WriteLine($"firstnumber po {firstNumber}");
//ParametrV1(99);

