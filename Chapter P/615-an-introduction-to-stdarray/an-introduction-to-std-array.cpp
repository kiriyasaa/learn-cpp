#include <array>
#include <iostream>

// Always pass std::array by reference or const reference
void printLength(const std::array<double, 5> &myArray)
{
  std::cout << "length: " << myArray.size() << '\n';
}

int main()
{
  // Just like the native implementation of fixed arrays, the length of a std::array must be known at compile time.
  // std::array<int, 5> myArray2 { 9, 7, 5, 3, 1 }; // list initialization
  std::array myArray{9.0, 7.2, 5.4, 3.6, 1.8}; // short declaration version allowed

  printLength(myArray);

  return 0;
}
