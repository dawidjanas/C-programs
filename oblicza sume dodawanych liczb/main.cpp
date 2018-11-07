#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int suma = 0;

    for (a=1; a!= 0; a+b)
    {
        cout <<"Podaj a: " << "\n";
        cin >> a;

        cout <<"Podaj b: " << "\n";
        cin >> b;

        if (a == 0 || b == 0)
        {
            return 0;
        }
        suma = suma + (a += b);
        cout << "Suma to: " << suma << "\n";


    }



}
