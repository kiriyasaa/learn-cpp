#include <iostream>

void printArray(int *array, int length)
{
  // if user passed in a null pointer for array, bail out early!
  if (!array)
    return;

  for (int index{0}; index < length; ++index)
    std::cout << array[index] << ' ';
}

void foo(int *ptr)
{
  *ptr = 6;
}

int main()
{
  int value{5};

  std::cout << "value = " << value << '\n';
  foo(&value);
  std::cout << "value = " << value << '\n';

  int array[6]{6, 5, 4, 3, 2, 1}; // remember, arrays decay into pointers
  printArray(array, 6);           // so array evaluates to a pointer to the first element of the array here, no & needed
  std::cout << std::endl;
  return 0;
}