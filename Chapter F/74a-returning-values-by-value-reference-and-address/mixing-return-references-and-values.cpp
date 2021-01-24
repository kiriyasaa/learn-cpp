#include <iostream>
int returnByValue()
{
  return 5;
}

int &returnByReference()
{
  static int x{5}; // static ensures x isn't destroyed when the function ends
  return x;
}

int main()
{
  int giana{returnByReference()}; // case A -- ok, treated as return by value
  // int &ref{returnByValue()};        // case B -- compile error since the value is an r-value, and an r-value can't bind to a non-const reference
  const int &cref{returnByValue()}; // case C -- ok, the lifetime of the return value is extended to the lifetime of cref

  return 0;
}