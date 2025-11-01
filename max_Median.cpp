#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> values(n);
  for (auto &it : values)
    cin >> it;

  ll mid = n / 2;
  sort(values.begin(), values.end());

  // count = how many elements are tied with the median
  ll count = 1;

  while (k > 0 && mid < n - 1)
  {
    ll gap = values[mid + 1] - values[mid];

    if (gap > 0)
    {
      ll cost = gap * count; // total ops required to lift whole block
      if (k >= cost)
      {
        values[mid] += gap; // simulate raising the block
        k -= cost;
        mid++;
        count++;
      }
      else
      {
        values[mid] += k / count; // partial raise
        k = 0;
      }
    }
    else
    {
      mid++;
      count++;
    }
  }

  // <-- IMPORTANT: distribute any remaining k across the current block
  if (k > 0)
  {
    values[mid] += k / count;
  }

  cout << values[mid] << endl;
  return 0;
}
