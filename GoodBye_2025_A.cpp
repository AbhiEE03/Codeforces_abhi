#include <bits/stdc++.h>
using namespace std;

void run_case()
{
  string s;
  cin >> s;
  int count = 0;
  for (char &c : s)
  {
    if (c == 'Y')
      count++;
    if (count > 1)
      break;
  }

  if (count > 1)
    cout << "NO" << "\n";
  else
    cout << "YES" << "\n";
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