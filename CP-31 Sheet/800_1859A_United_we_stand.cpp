/*
The answer is possible when all the elements aren't same.

Find the maxxx using *max_element(v.begin(), v.end())

then push the max elements in "C" and rest in "b"

(Take care of changing lines wherever needed)
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void run_case()
{
  int n;
  cin >> n;

  vector<ll> a(n);
  for (auto &it : a)
    cin >> it;

  vector<ll> b;
  vector<ll> c;

  int maxx = *max_element(a.begin(), a.end());

  for (int i = 0; i < n; i++)
  {
    if (a[i] != maxx)
      b.push_back(a[i]);
    else
      c.push_back(a[i]);
  }

  if (b.size() != 0)
  {
    cout << b.size() << " " << c.size() << "\n";
    for (auto &it : b)
      cout << it << " ";
    cout << "\n";
    for (auto &it : c)
      cout << it << " ";
    cout << "\n";
  }
  else
    cout << -1 << "\n";
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