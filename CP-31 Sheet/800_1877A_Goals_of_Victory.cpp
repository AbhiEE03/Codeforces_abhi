/*
If team X scores a goal against team Y, then X_eff++ and Y_eff-- and vice versa.

The overall sum, S = e1+e2+e3+ ..... +en  remains constant.

S = e1+e2+e3+ .... +en-1+en

en = S -(e1+e2+e3+..... en-1)

S is effectively zero as it's not changing.

The efficiency of missing team will be negative of the sum of other's efficiencies
*/

#include <bits/stdc++.h>
using namespace std;

void run_case()
{
  int n;
  cin >> n;
  vector<int> eff(n - 1);
  int sum = 0;
  for (auto &it : eff)
  {
    cin >> it;
    sum += it;
  }
  cout << -sum << "\n";
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