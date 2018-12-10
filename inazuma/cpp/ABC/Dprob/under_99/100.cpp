#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n, m;
  cin >> n >> m;
  vector<ll> x(n, 0);
  vector<ll> y(n, 0);
  vector<ll> z(n, 0);
  vector<ll> sum(n, 0);

  for (ll i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i] >> z[i];
  }

  vector<ll> opeSet = {1, -1};
  ll res = -1;
  for (ll j = 0; j < 2; j++)
  {
    for (ll k = 0; k < 2; k++)
    {
      for (ll l = 0; l < 2; l++)
      {
        for (ll i = 0; i < n; i++)
        {
          sum[i] = x[i] * opeSet[j] + y[i] * opeSet[k] + z[i] * opeSet[l];
        }
        sort(sum.rbegin(), sum.rend());
        ll tmp = 0;
        for (ll i = 0; i < m; i++) tmp += sum[i];
        res = max(tmp, res);
      }
    }
  }
  cout << res << endl;

}
