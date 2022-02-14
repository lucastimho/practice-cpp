#include <iostream>
using namespace std;

int main()
{
  int myNum = 5;
  double myFloatNum = 5.99;
  char myLetter = 'D';
  string myText = "Hello";
  bool myBoolean = true;
  int myAge = 35;
  cout << "I am " << myAge << " years old. \n";
  int x = 5, y = 6, z = 50;
  int sum = x + y;
  // add const in front of intializing variables to make it read-only like in JavaScript
  cout << sum << endl;
  return 0;
}