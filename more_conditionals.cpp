#include <iostream>
#include <string>
using namespace std;

int main()
{
  int Robert = 23;
  int Lily = 18;
  int Lori = 19;
  if (Robert > 18 && Lily > 18 && Lori > 18)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << 1 << endl;
  }
  int x = 1000;
  if (x < 5)
  {
    cout << 0 << endl;
  }
  else if (x < 10)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << 2 << endl;
  }
  return 0;
}