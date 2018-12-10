#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int n;
  cin >> n;
  vector<p> v(n, {0, 0});
  for(int i = 0; i < n; i++)
  {
    cin >> v[i].first;
  }

  int res = 0;
  for(int i = 0; i < n;)
  {
    if(i == 1) {
      cout << res << endl;
      return 0;
    }
    else
    {
      if(v[i].second == 1)
      {
        cout << -1 << endl;
        return 0;
      }
      v[i].second = 1;
      res++;
      i = v[i].first - 1;
    }
  }
}
