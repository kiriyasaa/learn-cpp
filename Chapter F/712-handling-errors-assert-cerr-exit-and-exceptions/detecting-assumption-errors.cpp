#include <iostream>
#include <string>

int main()
{
  std::string hello{"Hello, world!"};
  int index;

  do
  {
    std::cout << "Enter an index: ";
    std::cin >> index;

    //handle case where user entered a non-integer
    if (std::cin.fail())
    {
      std::cin.clear();             // reset any error flags
      std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer
      index = -1;                   // ensure index has an invalid value so the loop doesn't terminate
      continue;                     // this continue may seem extraneous, but it explicitly signals an intent to terminate this loop iteration
    }

  } while (index < 0 || index >= static_cast<int>(hello.size())); // handle case where user entered an out of range integer

  std::cout << "Letter #" << index << " is " << hello[index] << '\n';

  return 0;
}