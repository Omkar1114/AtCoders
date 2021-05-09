#include <iostream>
#include <string>

using namespace std;

int main()
{
  char c;
  string s;
  cin >> s;
  c = s[0];
  s.erase(0, 1);
  s.push_back(c);
  cout << s;
  return 0;
}