#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<vector<char>> v;
  int h, w, x, y;
  char t;
  int c = 0;
  cin >> h >> w >> x >> y;

  //take input
  for (int i = 0; i < h; i++)
  {
    vector<char> temp;
    for (int j = 0; j < w; j++)
    {
      cin >> t;
      temp.push_back(t);
    }
    v.push_back(temp);
  }

  //check for horizontal and vertical direction
  int a = x - 1, b = y - 1;
  while (a >= 0 && v[a][b] != '#')
  {
    c++;
    a--;
  }
  a = x - 1, b = y - 1;
  while (a < v.size() && v[a][b] != '#')
  {
    c++;
    a++;
  }
  a = x - 1, b = y - 1;
  while (b >= 0 && v[a][b] != '#')
  {
    c++;
    b--;
  }
  a = x - 1, b = y - 1;
  while (b < v[0].size() && v[a][b] != '#')
  {
    c++;
    b++;
  }

  //remove extra counts
  cout << c - 3;
  return 0;
}