#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, op;

    cout << "====== Simple Calculator ======\n";
    cout << "Choose two numbers: \n";
    cin >> a >> b;
    cout << "\nPick an operator: [1, 2, 3, 4]\n";
    cout << "[1] +\n[2] -\n[3] *\n[4] /\n";
    cin >> op;

    if (op == 1)
        cout << a << " + " << b << " is " << a + b << "\n";
    else if (op == 2)
        cout << a << " - " << b << " is " << a - b << "\n";
    else if (op == 3)
        cout << a << " * " << b << " is " << a * b << "\n";
    else if (op == 4)
    {
        if (b == 0)
            cout << "Cannot divide by zero!\n";
        else
            cout << a << " / " << b << " is " << a / b << "\n";
    }
    else
        cout << "Please enter a valid operator\n";

    system("pause");
    return 0;
}
