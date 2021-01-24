#include <iostream>

// Because printArray() doesn’t modify any of its arguments, it’s good form to make the array parameter const:
void printArray(const int *array, int length)
{
  // if user passed in a null pointer for array, bail out early!
  if (!array)
    return;

  for (int index{0}; index < length; ++index)
    std::cout << array[index] << ' ';
}

int main()
{
  int array[6]{6, 5, 4, 3, 2, 1};
  printArray(array, 6);
}