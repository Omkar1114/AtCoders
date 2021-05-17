#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double r, x, y, val;
  cin >> r >> x >> y;
  val = sqrt(pow(x, 2) + pow(y, 2));
  if (r == val)
  {
    cout << 1;
  }
  else if (val <= r + r)
  {
    cout << 2;
  }
  else
  {
    r = val / r;
    cout << ceil(r);
  }

  return 0;
}