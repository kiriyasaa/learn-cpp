#include <array>
#include <iostream>

// Returns a reference to the index element of array
int &getElement(std::array<int, 25> &array, int index)
{
  // we know that array[index] will not be destroyed when we return to the caller (since the caller passed in the array in the first place!)
  // so it's okay to return it by reference
  return array[index];
}

int main()
{
  std::array<int, 25> array;

  // Set the element of array with index 10 to the value 5
  getElement(array, 10) = 5;

  std::cout << array[10] << '\n';

  return 0;
}

/* 
When to use return by reference:
When returning a reference parameter
When returning a member of an object that was passed into the function by reference or address
When returning a large struct or class that will not be destroyed at the end of the function (e.g. one that was passed in by reference)

When not to use return by reference:
When returning variables that were declared inside the function or parameters that were passed by value (use return by value)
When returning a built-in array or pointer value (use return by address)
*/