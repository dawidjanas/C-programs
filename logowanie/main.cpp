#include <iostream>
#include <string>

using namespace std;

int main()
{
    int wiek1;
    int wiek2;
 cout << "Podaj wiek Adama" << "\n";
 cin >> wiek1;

 cout << "Podaj wiek Gosi" << "\n";
 cin >> wiek2;

 if (wiek1 > wiek2)
 {
     cout << "Adam jest starszy od Gosi!";
 }
 else if (wiek1 && wiek2 >= 100)
 {

     cout <<"Obie osoby maja powyzej lub 100lat!";
 }
 else
 {
     cout << "Gosia jest starsza od Adama";
 }

}
