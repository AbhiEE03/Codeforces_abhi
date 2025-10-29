#include <bits/stdc++.h>
using namespace std;

// Returns a vector ans[0..n]: number of distinct MEX values possible
// by removing exactly k elements from array a
vector<int> countMexByK(const vector<int> &a)
{
  int n = a.size();
  vector<int> freq(n + 2, 0);
  for (int v : a)
    if (v <= n + 1)
      freq[v]++;

  vector<int> prefTotal(n + 2, 0), prefKeep(n + 2, 0);
  for (int i = 0; i <= n + 1; i++)
  {
    prefTotal[i] = freq[i] + (i > 0 ? prefTotal[i - 1] : 0);
    prefKeep[i] = max(0, freq[i] - 1) + (i > 0 ? prefKeep[i - 1] : 0);
  }

  vector<int> ans(n + 1, 0);
  for (int mex = 0; mex <= n + 1; mex++)
  {
    int dupRemove = (mex > 0 ? prefKeep[mex - 1] : 0);
    int higherRemove = n - (mex > 0 ? prefTotal[mex - 1] : 0);
    int cost = dupRemove + higherRemove;
    if (0 <= cost && cost <= n)
      ans[cost]++;
  }
  return ans;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    vector<int> res = countMexByK(a);
    for (int k = 0; k <= n; k++)
    {
      cout << res[k] << (k < n ? ' ' : '\n');
    }
  }
  return 0;
}
