#include <bits/stdc++.h>
using namespace std;

int peak(vector<int> &weather, int k)
{
  int n = weather.size();
  int peak = 0, count = 0;
  for (int i = 0; i < n; i++)
  {
    if (weather[i] == 0)
      count++;
    else if (weather[i] == 1)
      count = 0;
    if (count == k)
    {
      peak++;
      count = 0;
      i++;
    }
  }
  return peak;
}

int main()
{
  int t;
  cin >> t;
  vector<int> hikes;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> weather(n);
    for (auto &it : weather)
      cin >> it;
    hikes.push_back(peak(weather, k));
  }

  for (auto &it : hikes)
    cout << it << endl;
}