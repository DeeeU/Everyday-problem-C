#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int h, w, n, m;
  cin >> h >> w >> n >> m;
  vector<string> v(n, "asdf");
  vector<int> countL(n, m);
  vector<int> countR(n, m);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    for (int j = 0; j < m; j++)
    {
      if (v[i][j] == '#')
      {
        countL[i] = j;
        // cout << countL[i] << endl;
        break;
      }
    }
    for (int j = m-1; j >= 0; j--)
    {
      if (v[i][j] == '#')
      {
        countR[i] = m - j - 1;
        // cout << countR[i] << endl;
        break;
      }
    }
  }
  cout << h * w - (countL[0] + countR[n-1]) << endl;

  return 0;
}
