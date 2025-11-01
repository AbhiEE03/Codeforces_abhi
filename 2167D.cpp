// YET ANOTHER ARRAY PROBLEM //

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Finding Primes //
//  bool is_Prime(ll n)
//  {
//    if (n < 2)
//      return false;
//    for (ll p = 2; p * p <= n; p += p % 2 + 1)
//    {
//      if (n % p == 0)
//        return false;
//    }
//    return true;
//  }

void valid_num()
{
  ll n;
  cin >> n;

  vector<ll> arr(n);
  for (auto &it : arr)
  {
    cin >> it;
  }

  ll g = 0;
  for (auto &it : arr)
    g = gcd(g, it);

  ll ans = -1;
  for (ll x = 2; x < 1000000; x++)
  {
    if (gcd(g, x) == 1)
    {
      ans = x;
      break;
    }
  }

  cout << ans << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    valid_num();
  }
}