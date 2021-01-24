#include <iostream>
#include <string>

struct Paw
{
  int claws{};
};

struct Animal
{
  std::string name{};
  Paw paw{};
};

int main()
{
  Animal puma{"Puma", {5}};

  Animal *pointy{&puma};

  // pointy is a pointer, use ->
  // paw is not a pointer, use .
  std::cout << pointy->paw.claws << '\n';

  return 0;
}