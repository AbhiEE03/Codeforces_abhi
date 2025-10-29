/*
Incorrect
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  vector<int> ans;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> grumpiness;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      grumpiness.push_back(a);
    }
    sort(grumpiness.begin(), grumpiness.end());
    int emeralds = 0;
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        int s = min(grumpiness[i], grumpiness[j]);
        if (grumpiness[i] > 0 || grumpiness[j] > 0)
        {
          int e = max(grumpiness[i], grumpiness[j]);
          emeralds += e;
          grumpiness[i] -= s;
          grumpiness[j] -= s;
        }
      }
    }
    ans.push_back(emeralds);
  }
  for (int i = 0; i < t; i++)
  {
    cout << ans[i] << endl;
  }
}