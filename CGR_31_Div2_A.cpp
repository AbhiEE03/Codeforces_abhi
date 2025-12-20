#include <bits/stdc++.h>
using namespace std;

void run_case()
{
  int l, a, b;
  cin >> l >> a >> b;
  vector<int> circle;

  for (int i = 0; i < l; i++)
  {
    circle.push_back(i);
  }

  int prize = circle[a];
  int spins = l / (gcd(b, l)); // After these many spins, the positions will start repeating

  for (int k = 0; k < spins; k++)
  {
    int new_pos = (a + (k * b)) % l;
    prize = max(prize, circle[new_pos]);
  }

  cout << prize << endl;
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