#include <iostream>
#include <string>

using namespace std;

int main()
{
    string haslo;
    int proba = 0;

    while (haslo != "klasa123")
    {
        cout << "Podaj haslo: " << "\n";
        cin >> haslo;

        if (haslo == "klasa123")
        {
            cout << "Poprawne haslo!";

        }
        else
        {
            proba += proba++;

        }
        if (proba == 7)
        {
            cout << "Podales zle haslo 3 razy!";
            break;
        }
    }






}
