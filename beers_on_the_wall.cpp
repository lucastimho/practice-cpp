#include <iostream>
#include <string>
using namespace std;

int main()
{
  for (int x = 99; x > 1; x--)
  {
    cout << x << " bottles of beer on the wall, " << x << " bottles of beer. \n";
    cout << "Take one down and pass it around, " << x - 1 << " bottles of beer on the wall. \n";
  }
  cout << "1 bottle of beer on the wall, 1 bottle of beer. \n";
  cout << "Take one down and pass it around, no more bottles of beer on the wall. \n";
  cout << "No more bottles of beer on the wall, no more bottles of beer. \n";
  cout << "Go to the store and buy some more, 99 bottles of beer on the wall. \n";
  return 0;
}