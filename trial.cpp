#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &it : arr)
      cin >> it;

    // Step 1: Compute gcd of all elements
    ll g = 0;
    for (auto &it : arr)
      g = gcd(g, it);

    // Step 2: Find smallest x >= 2 with gcd(g, x) == 1
    ll ans = -1;
    for (ll x = 2; x <= 1000000; x++)
    { // we don't need to go beyond this
      if (gcd(g, x) == 1)
      {
        ans = x;
        break;
      }
    }

    cout << ans << "\n";
  }
}
