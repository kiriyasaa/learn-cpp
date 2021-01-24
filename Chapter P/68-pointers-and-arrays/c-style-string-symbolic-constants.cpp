// C++ also supports a way to create C-style string symbolic constants using pointers:

#include <iostream>

int main()
{
  const char *myName{"Alex"}; // pointer to symbolic constant
  std::cout << myName << '\n';

  return 0;
}