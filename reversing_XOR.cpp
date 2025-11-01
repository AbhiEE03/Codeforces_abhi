#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool validX(ll n)
{
  // Binary Coversion
  string binary;
  if (n == 0)
    binary = "0";
  else
  {
    while (n)
    {
      binary.push_back((n & 1) + '0');
      n >>= 1;
    }
    reverse(binary.begin(), binary.end()); // Reversing the binary bits
  }

  int len = binary.size();

  // Padding with extra zeroes to make it a pallindrome if even bits and middle bit 0 if odd bits
  for (int bits = len; bits <= 60; bits++)
  {
    string temp = string(bits - len, '0') + binary;

    bool is_pal = true;
    for (int i = 0; i < bits / 2; i++)
    {
      if (temp[i] != temp[bits - 1 - i])
      {
        is_pal = false;
        break;
      }
    }

    if (is_pal)
    {
      if (bits % 2 == 0 || temp[bits / 2] == '0')
        return true;
    }
  }
  return false;
}

// Actual Execution
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;

    cout << (validX(n) ? "YES" : "NO") << "\n";
  }
  return 0;
}