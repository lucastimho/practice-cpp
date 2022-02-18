#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Enter two numbers with a space in between each number. \n";
  int x, y;
  cin >> x;
  cin >> y;
  int sum = x + y;
  cout << "The sum of the two numbers is " << sum << ". \n";
  return 0;
}