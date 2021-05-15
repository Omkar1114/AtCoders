#include <iostream>

using namespace std;

int main()
{
  long long n, t, res = 0;
  long long a[200] = {0};

  cin >> n;
  while (cin >> t)
  {
    t = t % 200;
    a[t]++;
  }

  for (int k = 0; k < 200; k++)
    res += (a[k] * (a[k] - 1)) / 2;

  cout << res;
  return 0;
}