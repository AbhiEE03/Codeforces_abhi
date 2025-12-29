#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void run_case()
{
  ll n;
  cin >> n;

  vector<ll> niceness(n);
  for (auto &it : niceness)
    cin >> it;

  ll curr = -niceness[n - 1];
  ll best_diff = niceness[n - 1];
  ll x = 0;

  for (ll i = n - 2; i >= 0; i--)
  {
    ll val = niceness[i];
    ll optimal_X = curr + max(0ll, val + best_diff);

    curr -= val;
    best_diff = max(best_diff, optimal_X - curr);
    if (i == 0)
      x = optimal_X;
  }
  cout << x << "\n";
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