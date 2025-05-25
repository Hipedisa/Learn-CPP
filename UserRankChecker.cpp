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
        cout << "Your rank is " << rank << "\n";
    }
    else if (points >= 500 && points < 1000)
    {
        rank = "Cheetah";
        cout << "Your rank is " << rank << "\n";
    }
    else if (points >= 1000 && points < 10000)
    {
        rank = "Lion";
        cout << "Your rank is " << rank << "\n";
    }
    else
    {
        rank = "Dragon";
        cout << "Your rank is " << rank << "\n";
    }

    cout << "Press Enter to exit...";
    cin.ignore(); // This skips leftover newline
    cin.get();    // This waits for Enter

    return 0;
}
