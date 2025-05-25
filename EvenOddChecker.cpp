#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int num;
    cout << "====== Even / Odd Checker ======\n";
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Number is even\n";
    else
        cout << "Number is odd\n";

    cout << "Press Enter to exit...";
    cin.ignore(); // This skips leftover newline
    cin.get();    // This waits for Enter

    return 0;
}
