#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// zad3.1
int skrNumber(int liczba)
{
    int power = 1;
    int score = 0;

    while (liczba > 0)
    {
        int cyfra = liczba % 10;
        if (cyfra % 2 == 1)
        {
            score = power * cyfra + score;
            power = power * 10;
        }
        liczba = liczba / 10;
    }

    return score;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // zad3.2
    ifstream file("skrot.txt");
    vector<int> lines;

    cout << "zad3.2\n";
    if (file.is_open())
    {
        int number;
        while (file >> number)
        {
            lines.push_back(number);
        }
        file.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku!" << endl;
        return 1;
    }

    vector<int> withoutAbbreviation;

    for (int number : lines)
    {
        if (skrNumber(number) == 0)
        {
            withoutAbbreviation.push_back(number);
        }
    }

    if (!withoutAbbreviation.empty())
    {
        cout << withoutAbbreviation.size() << " ";
        cout << *max_element(withoutAbbreviation.begin(), withoutAbbreviation.end()) << endl;
    }
    else
    {
        cout << "Brak liczb bez skrotu" << endl;
    }

    // zad 3.3
    cout << "zad3.3\n";

    vector<int> line1;

    ifstream file1("skrot2.txt");

    if (file1.is_open())
    {
        int number;
        while (file1 >> number)
        {
            line1.push_back(number);
        }
        file1.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku!" << endl;
        return 1;
    }

    for (int number : line1)
    {
        int abbreviation = skrNumber(number);
        if (gcd(number, abbreviation) == 7)
        {
            cout << number << endl;
        }
    }

    return 0;
}