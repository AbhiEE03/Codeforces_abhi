/*
We can see that the sum of even numbers will always be even
so we need odd numbers top occur even times so that their sum
is even as well.

The sum of n odd numbers is odd when n is odd else even
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void run_case()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (auto &it : arr)
    cin >> it;

  ll count_Odds = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 != 0)
      count_Odds++;
  }
  // The sum of n odd numbers is odd when n is odd else even
  if (count_Odds % 2 == 0)
    cout << "YES" << "\n";
  else
    cout << "NO" << "\n";
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

// vector<ll> prefix_Sum;
// prefix_Sum[0] = arr[0];
// for (int i = 1; i < n; i++)
// {
//   prefix_Sum[i] = prefix_Sum[i - 1] + arr[i];
// }