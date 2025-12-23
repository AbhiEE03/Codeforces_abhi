#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void run_case()
{
  ll n;
  cin >> n;
  vector<ll> num(n);
  for (auto &it : num)
  {
    cin >> it;
  }

  sort(num.begin(), num.end());
  int k = max(num[0], abs(num[1] - num[0]));

  cout << k << endl;
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