//  Since we have the magic trick(ops-1),
//  we can fill all the cells by using ops-1 for 2 times only
// if we have 3 continuous "." atlease once in our string else
// we need to perform ops-1 as many times as there are "." in the string

#include <bits/stdc++.h>
using namespace std;

void run_case()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  int cnt = 0, streak = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '.')
    {
      cnt++;
      streak++;
      if (streak == 3)
      {
        break;
      }
    }
    else
      streak = 0;
  }

  if (streak == 3)
    cout << 2 << endl;
  else
    cout << cnt << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    run_case();
  }
}