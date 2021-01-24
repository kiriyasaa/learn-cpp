#include <iostream>
#include <string>
using namespace std;
bool isNumeric(string str)
{
  for (int i = 0; i < str.length(); i++)
    if (isdigit(str[i]) == false)
      return false;
  return true;
}
int main()
{
  string str;
  int number;
  bool inputValidation = false;
  while (!inputValidation)
  {
    cout << "Enter a number: ";
    getline(cin, str);
    if (str == "")
    {
      continue;
    }
    else if (isNumeric(str))
    {
      cout << "This is a Number" << endl;
      number = stoi(str);
      inputValidation = true;
    }
    else
    {
      cout << "This is not a number" << endl;
    }
  }
  cout << "Number input: " << number << endl;
}