#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int losowanie (int minim, int maks);

int main()
{
    int wybor, liczba1, liczba2, liczba3;


    srand(time (NULL));

    cout << "Witaj w JEDNOREKIM BANDYCIE! Co chcesz zrobic? 1 - Graj, 2 - Nagrody, 3 - Wyjscie" << "\n";
    cin >> wybor;



    if (wybor == 1)
    {
        liczba1 = losowanie(1, 3);
        liczba2 = losowanie(1, 3);
        liczba3 = losowanie(1, 3);

        if (liczba1 == 1)
        {
            cout << "DZWONEK ";
        }
        else if (liczba1 == 2)
        {
            cout << "WISNIA ";
        }
        else if (liczba1 == 3)
        {
            cout << "JACKPOT ";
        }

            if (liczba2 == 1)
            {
                cout << "DZWONEK ";
            }
            else if (liczba2 == 2)
            {
                cout << "WISNIA ";
            }
            else if (liczba2 == 3)
            {
                cout << "JACKPOT ";
            }

                if (liczba3 == 1)
                {
                    cout << "DZWONEK ";
                }
                else if (liczba3 == 2)
                {
                    cout << "WISNIA ";
                }
                else if (liczba3 == 3)
                {
                    cout << "JACKPOT ";
                }

    }
    else if (wybor == 2)
    {
        cout << "Nagrody: " << "\n" << "Dzwonki - 100zl, Wisnie - 200zl, Jackpot - 50 000zl" << endl;

    }
    else
    {
        cout << "Zapraszamy ponownie!" << "\n";
    }

}

int losowanie (int minim, int maks)
{
    return rand() % (maks - minim + 1) + minim;
}
