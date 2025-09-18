using System.Drawing;

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
Console.WriteLine("\n\n");

void ParametrV1(int p)
{
    Console.WriteLine($"Parametr w ParametrV1 {p}");
    p++;
    Console.WriteLine($"Parametr w ParametrV1 {p}");
}

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
ParametrV1(firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");
//ParametrV1(99);

void ParametrV2(ref int p)
{
    Console.WriteLine($"Parametr w ParametrV2 {p}");
    p = 19;
    Console.WriteLine($"Parametr w ParametrV2 {p}");
}

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
ParametrV2(ref firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");
//ParametrV2(ref 99); //BLAD


void ParametrV3(out int p)
{
    //Console.WriteLine($"Parametr w ParametrV3 {p}");
    p=19;
    Console.WriteLine($"Parametr w ParametrV3 {p}");
}

int thirdNumber;
ParametrV3(out thirdNumber);
Console.WriteLine($"thirdNumber po {thirdNumber}");
//ParametrV3(ref 99); //BLAD

//-----------------------------------------------------

string firstStrNumber = "15";

int firstConvertNumber = int.Parse(firstStrNumber);
Console.WriteLine($"Po konwersji {firstStrNumber}");

if(int.TryParse(firstStrNumber, out int secondStrNumber))
    Console.WriteLine($"Udalo sie skonwerstowac {secondStrNumber}");


void ParametrTestClass_v1(Point)
{

}