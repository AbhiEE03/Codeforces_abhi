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
    string s = to_string(n);
    char minD = *min_element(s.begin(), s.end());
    ans.push_back(minD - '0');
  }

  for (auto &it : ans)
    cout << it << endl;
}