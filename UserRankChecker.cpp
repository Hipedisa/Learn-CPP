#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string rank;
    int points;

    cout << "====== User Rank Checker ======\n";
    cout << "Enter your points: ";
    cin >> points;

    if (points < 500)
    {
        rank = "Cat";
        cout << "Your rank is " << rank;
    }
    else if (points >= 500 && points < 1000)
    {
        rank = "Cheetah";
        cout << "Your rank is " << rank;
    }
    else if (points >= 1000 && points < 10000)
    {
        rank = "Lion";
        cout << "Your rank is " << rank;
    }
    else
    {
        rank = "Dragon";
        cout << "Your rank is " << rank;
    }

    return 0;
}
