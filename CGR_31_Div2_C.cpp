#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void run_case()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> xor_factorization;

  if (k == 1)
    xor_factorization.push_back(n);
  else if (k == 2)
  {
    xor_factorization.push_back(0);
    xor_factorization.push_back(n);
  }
  else if (k % 2 == 0)
  {
    if (n % 2 == 1)
    {
      xor_factorization.push_back(1);
      xor_factorization.push_back(n - 1);
    }
    else
    {
      xor_factorization.push_back(2);
      xor_factorization.push_back(n - 2);
    }

    for (int i = 3; i <= k; i++)
    {
      xor_factorization.push_back(n);
    }
  }

  else
  {
    for (int i = 0; i < k; i++)
    {
      xor_factorization.push_back(n);
    }
  }

  for (auto &it : xor_factorization)
  {
    cout << it << " ";
  }
  cout << endl;
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