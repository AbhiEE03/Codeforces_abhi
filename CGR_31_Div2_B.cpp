#include <bits/stdc++.h>
using namespace std;

void run_case()
{
  int n;
  cin >> n;
  string s = "";
  vector<string> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    string left = a[i] + s;
    string right = s + a[i];
    s = min(left, right);
  }

  cout << s << endl;
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