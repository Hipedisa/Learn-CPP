#include <iostream>
using std::cout;

/*
===============================================
  Backslash allows to type special characters
that cannot be typed under normal circumstances
===============================================
-- \n New line
-- \\ Prints backslash
-- \' Prints single quote
-- \" Prints double quote
-- \t Prints a tab
-- \r Makes cursor at start of sentence and types the rest of sentence, overwriting the characters from the start
*/

// Floats are less precise (7 digits) but only 4 bytes
// Doubles are more precise (15 digits) but are 8 bytes

float x = 3.3f; // Must put f after float or it will be a double
double y = 3.3;

int main()
{
  // cout << "Line 1\n";
  // cout << "Line 2\\\n";
  // cout << "Line 3 \"4\"\n";
  // cout << "Line 5\t\t6\n";
  // cout << "Osama\rElzero";

  cout << x;

  return 0;
}