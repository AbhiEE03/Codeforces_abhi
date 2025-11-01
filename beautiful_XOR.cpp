#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll a, b;
    cin >> a >> b;

    if (a == b)
    {
      cout << 0 << endl;
      continue;
    }

    if (a > b)
    {
      ll x = a ^ b;
      if (x <= a)
      {
        cout << 1 << endl
             << x << endl;
      }
      else
      {

        ll high = 1;
        while (high <= a)
          high <<= 1;
        high >>= 1;
        ll x1 = high;
        ll x2 = (a ^ b) ^ x1;
        cout << 2 << endl;
        cout << x1 << " " << x2 << endl;
      }
    }
    else
    {
      ll difference = a ^ b;
      if (difference > a)
      {
        cout << -1 << endl;
      }
      else
      {

        ll x_1 = difference & (-difference);
        ll x_2 = difference ^ x_1;
        cout << 2 << endl
             << x_1 << " " << x_2 << endl;
      }
    }
  }
  return -1;
}
