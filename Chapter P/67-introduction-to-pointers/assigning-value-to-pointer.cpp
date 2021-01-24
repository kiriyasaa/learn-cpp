#include <iostream>

int main()
{
  int v{5};
  int *ptr{&v}; // initialize ptr with address of variable v

  std::cout << &v << '\n';   // print the address of variable v
  std::cout << ptr << '\n';  // print the address that ptr is holding
  std::cout << *ptr << '\n'; // print the value of address that ptr is holding

  return 0;
}