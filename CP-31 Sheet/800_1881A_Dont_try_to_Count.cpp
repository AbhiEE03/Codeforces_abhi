/*
You can perform max 5 ops, after that it will go beyond 25 length.

While looping if x is smaller that s then keep performing ops after that

look for the substring s in x starting from index 0 to x.size()-s.size()

if this loop returns nothing after 5 ops then return -1

*/

#include <bits/stdc++.h>
using namespace std;

void run_case()
{
  int n, m;
  cin >> n >> m;
  string x, s;
  cin >> x >> s;

  int ops = 0, i = 0;
  while (ops <= 5)
  {

    if (x.size() < s.size())
    {
      x += x;
      ops++;
      continue;
    }

    for (int i = 0; i <= (x.size() - s.size()); i++)
    {
      if ((x.substr(i, s.size())) == s)
      {
        cout << ops << endl;
        return;
      }
    }

    x += x;
    ops++;
  }

  cout << -1 << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    run_case();
  }
  return 0;
}
