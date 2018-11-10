#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int losowanie (int reszka,int orzel);
int main()
{
    int wybor;
    cout << "Chcesz rzucic moneta? 1 - tak, 2 - nie" << "\n";
    cin >> wybor;

    srand(time (NULL));

    if (wybor == 1)
    {

        if (losowanie(3, 4) == 3)
        {
            cout << "Orzel";
        }
        else
        {
            cout << "Reszka";
        }
    }
    else
    {
        cout << "Koniec programu" << "\n";
    }
}
int losowanie(int reszka,int  orzel)
{
    return rand() % (orzel - reszka + 1) + reszka;
}
