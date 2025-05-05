/*
=== Iostream Header File Content ===
-- cout
-- cin
-- cerr
-- clog
-- wcout
-- wcin
-- wcerr
-- wclog
*/

#include <iostream>

int main()
{
    int price = 100;
    int tax = 15;

    std::cout << "Price before tax: " << price;
    std::cout << "\nPrice after tax: " << price + tax;

    price = 115;

    std::cout << "\nNew price is: " << price;

    return 0;
}