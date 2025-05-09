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
using std::cout;
#include <windows.h>

int main()
{
    int age;

    cout << "========================\n"
            "==== Age Calculator ====\n"
            "========================\n\n";
    cout << "Insert your age: ";
    std::cin >> age;

    int ageInDays = age * 365;
    int ageInHrs = ageInDays * 24;
    int ageInMins = ageInHrs * 60;
    int ageInSecs = ageInMins * 60;

    cout << "\nAge in days: " << ageInDays << " Days\n";
    cout << "Age in hours: " << ageInHrs << " Hours\n";
    cout << "Age in minutes: " << ageInMins << " Minutes\n";
    cout << "Age in seconds: " << ageInSecs << " Seconds";

    std::cin.ignore(); // Clear the leftover '\n'
    std::cin.get();    // Makes it wait so user can read
    return 0;
}