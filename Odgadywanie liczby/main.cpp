#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int losowanie (int minim, int maks);

int main()
{
    int liczba, wybor;
    srand (time (NULL));

    liczba = losowanie(1, 100);

    cout << "Zgadnij liczbe z zakresu 1 - 100" << endl;
    cin >> wybor;

    if (wybor == liczba)
    {
        cout << "Zgadles twoja liczba to:" << liczba << endl;
    }
    else
    {
       while (wybor != liczba)
        {
           if (wybor < liczba)
           {
               cout << "Losowa liczba jest wieksza" << endl;
               cin >> wybor;
           }
           else if (wybor > liczba)
           {
               cout << "Twoja liczba jest mniejsza" << endl;
               cin >> wybor;
           }
        }
        cout << "Brawo odgales liczbe" << endl;
    }
}

int losowanie(int minim, int maks)
{
    return rand() % (maks - minim + 1) + minim;
}
