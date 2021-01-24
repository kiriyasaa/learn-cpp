#include <iostream>
using namespace std;

int doubleValue(int x)
{
  int value{x * 2};
  return value; // A copy of value will be returned here
} // value goes out of scope here

int main()
{
  int x{5};
  cout << x << endl;
  x = doubleValue(x);
  cout << x << endl;
  return 0;
}

/* 
When to use return by value:
When returning variables that were declared inside the function
When returning function arguments that were passed by value

When not to use return by value:
When returning a built-in array or pointer (use return by address)
When returning a large struct or class (use return by reference)
*/