// YOUR NAME //
// sort both the strings and compare them( S==T)

#include <bits/stdc++.h>
using namespace std;

void name()
{
  int n;
  string s, t;
  cin >> n >> s >> t;

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());

  cout << (s == t ? "YES" : "NO") << endl;
}

int main()
{
  int q;
  cin >> q;
  while (q--)
  {
    name();
  }
}