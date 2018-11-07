#include <iostream>
#include <string>

using namespace std;

int dodawanie (int x , int y);
int odejmowanie (int x, int y);
int mnozenie (int x, int y);
int dzielenie (int x, int y);

int main()
{
    string znak;
    int liczba1;
    int liczba2;
    int wynik;

    cout << "Co chcesz robic? Podaj znak dzialania: Dodawanie: +, Odejmowanie: -, Mnozenie: *, Dzielenie: /" << "\n";
    cin >> znak;

    cout <<"Podaj pierwsza liczbe" << "\n";
    cin >> liczba1;

    cout <<"Podaj druga liczbe" << "\n";
    cin >> liczba2;

    if (znak == "+")
    {
        wynik = dodawanie(liczba1, liczba2);
        cout << wynik;
    }
    else if (znak == "-")
    {
        wynik = odejmowanie(liczba1, liczba2);
        cout << wynik;
    }
    else if (znak == "*")
    {
        wynik = mnozenie(liczba1, liczba2);
        cout << wynik;
    }
    else if (znak == "/")
    {
        wynik = dzielenie(liczba1, liczba2);
        cout << wynik;
    }

}
int dodawanie(int x, int y)
{
    return x + y;
}
int odejmowanie(int x, int y)
{
    return x - y;
}
int mnozenie(int x, int y)
{
    return x * y;
}
int dzielenie(int x, int y)
{
    return x / y;
}
