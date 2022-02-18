#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Welcome to the Matrix. Do you want to take the red pill or blue pill? \n";
  string pill;
  cin >> pill;
  if (pill == "red")
  {
    cout << "You took the red pill. \n";
  }
  else if (pill == "blue")
  {
    cout << "You took the blue pill. \n";
  }
  return 0;
}