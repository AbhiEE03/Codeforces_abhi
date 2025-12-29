#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void run_case()
{
  string r;
  cin >> r;
  int gap = 0;
  ll ops = 0;

  ll n = r.size();
  if (r[0] != 's')
  {
    r[0] = 's';
    ops++;
  }

  if (r[n - 1] != 's')
  {
    r[n - 1] = 's';
    ops++;
  }

  for (auto &it : r)
  {
    if (it != 's')
      gap++;
    else
      gap = 0;

    if (gap > 1)
    {
      it == 's';
      ops++;
      gap = 0;
    }
  }

  cout << ops << "\n";
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