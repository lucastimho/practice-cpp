#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "What day of the week is it today? \n";
  string x;
  cin >> x;
  if (x == "Monday")
  {
    cout << "Sounds like someone has a case of the Mondays! \n";
  }
  else if (x == "Tuesday" || x == "Wednesday" || x == "Thursday" || x == "Friday")
  {
    cout << "Time to make the Donuts! \n";
  }
  else if (x == "Saturday" || x == "Sunday")
  {
    cout << "It's weekend. Enjoy it. \n";
  }
  return 0;
}