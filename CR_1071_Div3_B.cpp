#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void run_case()
{
  ll n;
  cin >> n;
  vector<ll> floors(n);
  for (int i = 0; i < n; i++)
  {
    cin >> floors[i];
  }

  ll sum = 0;
  for (ll i = 0; i < n - 1; i++)
  {
    sum += abs(floors[i + 1] - floors[i]);
  }

  ll min_sum = sum;
  for (ll i = 1; i < n - 1; i++)
  {
    ll curr = abs(floors[i] - floors[i - 1]) + abs(floors[i + 1] - floors[i]) - abs(floors[i + 1] - floors[i - 1]);
    min_sum = min(min_sum, sum - curr);
  }

  min_sum = min(min_sum, sum - abs(floors[1] - floors[0]));
  min_sum = min(min_sum, sum - abs(floors[n - 1] - floors[n - 2]));
  cout << min_sum << endl;
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