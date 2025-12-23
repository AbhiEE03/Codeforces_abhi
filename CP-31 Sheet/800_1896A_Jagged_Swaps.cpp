// Note that the given permutation can be sorted only if
// the first element is 1, otherwise it's impossible to sort
//  because we can perform swapping operations
//  only on elements at index 2 to n-1.

#include <bits/stdc++.h>
using namespace std;

void run_case()
{
  int n;
  cin >> n;
  vector<int> permutation(n);
  for (int i = 0; i < n; i++)
  {
    cin >> permutation[i];
  }

  if (permutation[0] == 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    run_case();
  }
}