#include <iostream>
#include <string>

using namespace std;

int main()
{
         string odp;
         cout << "Dokonaj wyboru: \n Tak \n Nie \n Moze " << "\n";
         cin >> odp;
        while (odp !="Tak" || odp != "Nie" || odp != "Moze" )
        {
             if (odp =="Tak" || odp == "Nie" || odp == "Moze")
             {
                 cout << "Brawo";
                 break;

            }
            cout << "Dokonaj wyboru: \n Tak \n Nie \n Moze " << "\n";
            cin >> odp;
        }

}
