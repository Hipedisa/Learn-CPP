#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, c;

    cout << "====== Greatest Number Finder ======\n";
    cout << "Enter three numbers: \n";
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << a << " is the greatest number\n";
    else if (b > a && b > c)
        cout << b << " is the greatest number\n";
    else
        cout << c << " is the greatest number\n";

    cout << "Press Enter to exit...";
    cin.ignore(); // This skips leftover newline
    cin.get();    // This waits for Enter

    return 0;
}
