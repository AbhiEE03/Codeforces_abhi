#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void run_case()
{
  ll n;
  cin >> n;
  vector<ll> integers(n);
  for (auto &it : integers)
    cin >> it;

  sort(integers.begin(), integers.end(), [](int a, int b)
       { return abs(a) < abs(b); });

  // if (integers[0] == 0)
  //   cout << 0 << "\n";
  // else
  cout << abs(integers[0]) << "\n";
}

int main()
{
  // int t;
  // cin >> t;
  // while (t--)
  // {
  run_case();
  // }
  return 0;
}