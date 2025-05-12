#include <iostream>

int main()
{
  int kilobytes;

  std::cout << "Enter number of kilobytes: ";
  std::cin >> kilobytes;

  int bytes = kilobytes * 1024;
  int bits = bytes * 8;

  std::cout << "Number of kilobytes: " << kilobytes << " kilobytes\n";
  std::cout << "Number of bytes: " << bytes << " bytes\n";
  std::cout << "Number of bits: " << bits << " bits";
  return 0;
}