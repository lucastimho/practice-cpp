#include <iostream>
#include <string>
using namespace std;

int main()
{
  // int x;
  // cout << "Type a number: \n";
  // cin >> x;
  // cout << "Your number is: " << x << endl;
  string fullName;
  cout << "Type your full name: \n";
  getline(cin, fullName);
  cout << "Your name is: " << fullName << endl;
  return 0;
}