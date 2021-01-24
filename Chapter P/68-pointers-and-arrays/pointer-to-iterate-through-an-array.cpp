#include <iostream>
#include <iterator> // for std::size

bool isVowel(char ch)
{
  switch (ch)
  {
  case 'A':
  case 'a':
  case 'E':
  case 'e':
  case 'I':
  case 'i':
  case 'O':
  case 'o':
  case 'U':
  case 'u':
    return true;
  default:
    return false;
  }
}

int main()
{
  char name[]{"Mollie"};
  int arrayLength{static_cast<int>(std::size(name))};
  int numVowels{0};

  for (char *ptr{name}; ptr < (name + arrayLength); ++ptr)
  {
    if (isVowel(*ptr))
    {
      ++numVowels;
    }
  }

  std::cout << name << " has " << numVowels << " vowels.\n";

  return 0;
}

// Altenative
// Using count_if

/* #include <algorithm>
#include <iostream>
#include <iterator> // for std::begin and std::end

bool isVowel(char ch)
{
  switch (ch)
  {
  case 'A':
  case 'a':
  case 'E':
  case 'e':
  case 'I':
  case 'i':
  case 'O':
  case 'o':
  case 'U':
  case 'u':
    return true;
  default:
    return false;
  }
}

int main()
{
  char name[]{"Mollie"};
  auto numVowels{std::count_if(std::begin(name), std::end(name), isVowel)};

  std::cout << name << " has " << numVowels << " vowels.\n";

  return 0;
} */