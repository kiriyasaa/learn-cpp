#include <iostream>
#include <vector>

void printLength(const std::vector<int> &array)
{
  std::cout << "The length is: " << array.size() << '\n';
}

int main()
{
  // declaration
  // no need to specify length at the declaration
  std::vector<int> array1;
  std::vector<int> array2 = {9, 7, 5, 3, 1}; // use initializer list to initialize array (Before C++11)
  std::vector<int> array3{9, 7, 5, 3, 1};    // use uniform initialization to initialize array
  // as with std::array, the type can be omitted since C++17
  std::vector array4{9, 7, 5, 3, 1}; // deduced to std::vector<int>

  std::vector array{9, 7, 5, 3, 1};
  printLength(array);

  return 0;
}