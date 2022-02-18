#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "I'm thinking of a number between 1 and 100. \n";
  int x;
  cin >> x;
  if (x == 33)
  {
    cout << "You win! \n";
  }
  else if (x < 33)
  {
    cout << "Too low! \n";
  }
  else
  {
    cout << "Too high! \n";
  }
  return 0;
}