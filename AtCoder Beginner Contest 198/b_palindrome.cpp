#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string n, t, r;
  cin >> n;

  //With no added zeros
  r = n;
  reverse(r.begin(), r.end());
  if (n == r)
  {
    cout << "Yes";
    return 0;
  }

  //Added zeroes
  for (int i = 0; i < 10; i++)
  {
    n.insert(0, "0");
    r = n;
    reverse(r.begin(), r.end());
    if (n == r)
    {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
  return 0;
}