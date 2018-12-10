#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int h, w;
  cin >> h >> w;
  vector<vector<string>> v(h, vector<string>(w, "@"));

  int res = 0;
  char c = 'A';
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> v[i][j];
      if(v[i][j] == "snuke")
      {
        res = i;
        c += j;
      }
    }
  }

  cout << c << res+1 << endl;


}
