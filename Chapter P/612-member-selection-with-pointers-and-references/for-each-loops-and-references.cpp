#include <iostream>

int main()
{
  std::string array[]{"peter", "likes", "frozen", "yogurt"};
  for (auto &element : array) // The ampersand makes element a reference to the actual array element, preventing a copy from being made
  {
    std::cout << element << ' ';
  }

  // it’s a good idea to make your reference const if you’re intending to use it in a read-only fashion:
  for (const auto &element : array) // element is a const reference to the currently iterated array element
  {
    std::cout << element << ' ';
  }

  return 0;
}