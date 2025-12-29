/*
Keep a count off negative ones while taking the input.

if -1 is more than half of array then increase the ops by their difference.

print ops if count_neg - ops is even else ops++
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void run_case()
{
  ll n;
  cin >> n;
  vector<int> unit_array(n);
  ll count_neg = 0;
  for (auto &it : unit_array)
  {
    cin >> it;
    if (it == -1)
      count_neg++;
  }

  ll ans = 0;
  if (count_neg > n / 2)
    ans = count_neg - n / 2;

  ans = (count_neg - ans) % 2 == 0 ? ans : ans + 1;
  cout << ans << "\n";
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