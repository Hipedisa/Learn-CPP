/*
  Control Flow
  - Switch
*/

#include <iostream>
using namespace std;

int main()
{

    // if (day == 1)
    // {
    //     cout << "Open From 08:00 To 14:00";
    // }
    // else if (day == 2)
    // {
    //     cout << "Open From 08:00 To 14:00";
    // }
    // else if (day == 3)
    // {
    //     cout << "Open From 10:00 To 16:00";
    // }
    // else
    // {
    //     cout << "Closed";
    // }

    int points;
    cout << "Enter your points: ";
    cin >> points;

    switch (points)
    {
    case 100:
    case 110:
    case 120:
        cout << "You won an iPhone!\n";
        points = 0;
        break;
    case 400:
        cout << "You won an iPad\n";
        points = 0;
        break;
    case 500:
        cout << "You won a PS5\n";
        points = 0;
        break;
    default:
        cout << "You won nothing\n";
        points = 0;
        break;
    }

    system("pause");

    return 0;
}