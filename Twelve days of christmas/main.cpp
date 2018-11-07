#include <iostream>

using namespace std;

int main()
{
    int wybor;
   cout << "Czy chcesz wysluchac piosenki Twelve days of Christmans?" << "\n" << "1 - tak, 2 - nie" << endl;
   cin >> wybor;

   switch(wybor)
   {
    case 2:
    cout << "Nie, to nie";
    break;
   case 1:
    cout << "On the first day of Christmas my true love sent to me A partridge in a pear tree" << endl;
   case 3:
    cout << "On the second day of Christmas my true love sent to me Two turtle doves" << endl;
   case 4:
    cout << "On the third day of Christmas my true love sent to me Three French hens" << endl;
    break;
   default:
    cout << "blad";
    break;



   }
}
