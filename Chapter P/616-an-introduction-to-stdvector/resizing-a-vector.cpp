#include <iostream>
#include <vector>

int main()
{
  std::vector array{0, 1, 2};
  array.resize(5); // set size to 5

  std::cout << "The length is: " << array.size() << '\n';

  for (int i : array)
    std::cout << i << ' ';

  std::cout << '\n';

  std::vector array2{0, 1, 2, 3, 4};
  array2.resize(3); // set length to 3

  std::cout << "The length is: " << array2.size() << '\n';

  for (int i : array2)
    std::cout << i << ' ';

  std::cout << '\n';

  // Using direct initialization, we can create a vector with 5 elements,
  // each element is a 0. If we use brace initialization, the vector would
  // have 1 element, a 5.
  std::vector<int> array3(5);

  std::cout << "The length is: " << array3.size() << '\n';

  for (int i : array3)
    std::cout << i << ' ';

  std::cout << '\n';

  return 0;
}