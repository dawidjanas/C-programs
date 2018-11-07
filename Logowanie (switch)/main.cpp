#include <iostream>
#include <string>

using namespace std;

int main()
{
    char a;

    cout << "Co chcesz zrobic? Connect - logowanie, Disconnect - wylogowanie" << "\n";
    cin >> a;

    switch(a)
    {
    case 1:
        cout << "Polaczyles sie" << "\n";
    case 2:
        cout << "Wylohowales sie" << "\n";
    default:
        cout <<"Blad" << "\n";

    }
}
