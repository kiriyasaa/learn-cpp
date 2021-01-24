#include <iostream>
using namespace std;

int *doubleValue(int x)
{
  int static value{x * 2};
  return &value; // return value by address here
} // value destroyed here

int main()
{
  int x{5};
  int *ptr{nullptr};
  cout << x << endl;
  ptr = doubleValue(x);
  cout << *ptr << endl;
  return 0;
}

/* 
When to use return by address:
When returning dynamically allocated memory and you can’t use a type that handles allocations for you
When returning function arguments that were passed by address

When not to use return by address:
When returning variables that were declared inside the function or parameters that were passed by value (use return by value)
When returning a large struct or class that was passed by reference (use return by reference)
*/