#include <iostream>
#include <iterator>

int *find(int *begin, int *end, int value)
{
  for (int *p{begin}; p != end; ++p)
  {
    if (*p == value)
    {
      return p;
    }
  }

  return end;
}

int main()
{
  int arr[]{2, 5, 4, 10, 8, 20, 16, 40};

  int *found{find(std::begin(arr), std::end(arr), 20)};

  if (found != std::end(arr))
  {
    std::cout << *found << '\n';
  }

  return 0;
}

// Tip
// find is a standard function:

/* #include <algorithm> // std::find
#include <iostream>
#include <iterator>

int main()
{
  int arr[]{2, 5, 4, 10, 8, 20, 16, 40};

  // Note: std::find returns an iterator, we'll talk about iterators later.
  auto found{std::find(std::begin(arr), std::end(arr), 20)};

  if (found != std::end(arr))
  {
    std::cout << *found << '\n';
  }

  return 0;
} */