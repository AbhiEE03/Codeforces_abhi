#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  vector<int> result;
  while (t--)
  {
    int n;
    cin >> n;
    int winner = n, loser = 0, matches = 0;

    while (!(winner == 1 && loser == 1))
    {
      if (winner % 2 == 0 && loser % 2 == 0)
      {
        winner = winner / 2;
        loser = winner + loser / 2;
        matches += loser;
      }
      else if (winner % 2 != 0 && loser % 2 != 0)
      {
        winner = (winner + 1) / 2;
        loser = (winner - 1) + (loser + 1) / 2;
        matches += (loser - 1);
      }
      else if (winner % 2 == 0 && loser % 2 != 0)
      {
        winner = winner / 2;
        loser = (winner) + (loser + 1) / 2;
        matches += (loser - 1);
      }
      else
      {
        winner = (winner + 1) / 2;
        loser = (winner - 1) + loser / 2;
        matches += loser;
      }
    }
    matches++;
    result.push_back(matches);
  }

  for (auto &it : result)
    cout << it << endl;
}
