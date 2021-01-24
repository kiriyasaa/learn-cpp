#include <array>
#include <cstddef> // std::size_t
#include <iostream>

int main()
{
  std::array myArray{7, 3, 1, 9, 5};

  // use one of this
  // std::array<int, 5>::size_type is the return type of size()!
  // for (std::array<int, 5>::size_type i{ 0 }; i < myArray.size(); ++i)
  // Fortunately, std::array::size_type is just an alias for std::size_t, so we can use that instead.
  for (std::size_t i{0}; i < myArray.size(); ++i)
    std::cout << myArray[i] << ' ';

  std::cout << '\n';

  // Print the array in reverse order.
  for (auto i{myArray.size()}; i-- > 0;)
    std::cout << myArray[i] << ' ';

  std::cout << '\n';

  return 0;
}