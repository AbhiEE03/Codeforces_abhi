// SQUARE //
// They will for a square if all the sides are equal

#include <bits/stdc++.h>
using namespace std;

void square()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << (a == b && b == c && c == d ? "YES" : "NO") << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    square();
  }
}