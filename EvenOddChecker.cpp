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

    system("pause");

    return 0;
}
