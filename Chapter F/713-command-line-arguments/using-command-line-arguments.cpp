#include <iostream>

int main(int argc, char *argv[])
{
  std::cout << "There are " << argc << " arguments:\n";

  // Loop through each argument and print its number and value
  for (int count{0}; count < argc; ++count)
  {
    std::cout << count << ' ' << argv[count] << '\n';
  }

  return 0;
}

// Now, when we invoke this program (MyArgs) with the command line arguments “Myfile.txt” and “100”,
// on linux:
// ./using-command-line-arguments HelloWorld 100