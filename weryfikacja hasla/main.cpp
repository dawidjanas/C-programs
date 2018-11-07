#include <iostream>
#include <string>

using namespace std;

string haslo;
int wery (string x);
int main()
{

    cout <<"Podaj haslo:";

    cin >> haslo;

    cout << wery(haslo);

}
int wery (string x)
{

   if (haslo == "123" || haslo == "456")
    {
        cout <<"Haslo poprawne";
    }
    else
    {
        cout <<"Haslo niepoprawne";
    }
}
