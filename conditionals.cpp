#include <iostream>
#include <string>
using namespace std;

int main()
{
  int people[4] = {23, 18, 19, 32};
  for (int i = 0; i < 4; i++)
  {
    cout << people[i] << endl;
  }

  int x = 20;
  if (x < 10)
  {
    x += 1;
  }
  else if (x == 10)
  {
    x += 2;
  }
  else
  {
    x += 3;
  }
  cout << x << endl;
  return 0;
}