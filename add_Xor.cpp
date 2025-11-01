#include <bits/stdc++.h>
using namespace std;

int minCost(int a, int b, int x, int y)
{
  int cost = 0;
  if (a == b)
    return 0;

  if (a - b == 1 && a % 2 != 0)
  {
    return y;
  }

  while (a < b)
  {
    if (a % 2 == 0)
    {
      cost += min(x, y);
      a++;
    }
    else
    {
      cost += x;
      a++;
    }
    if (a == b)
      return cost;
  }

  return -1;
}

int main()
{
  int t;
  cin >> t;
  vector<int> result;
  while (t--)
  {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    result.push_back(minCost(a, b, x, y));
  }

  for (auto it : result)
    cout << it << endl;
  return 0;
}
