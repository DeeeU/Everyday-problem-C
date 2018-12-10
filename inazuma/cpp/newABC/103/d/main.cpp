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
  int n, m;
  cin >> n >> m;
  vector<p> v(m, {0, 0});

  for (int i = 0; i < m; i++)
  {
    cin >> v[i].second >> v[i].first;
  }
  sort(all(v));
  int res = 1;
  // cout << v[0].first << endl;
  // for(auto a : v) cout << a.first << " : " << a.second << endl;
  // cout << "==========--" << endl;

  for (int i = 0; i < m; i++)
  {
    if(v[i].second >= v[0].first){
      res++;
      v[0].first = v[i].first;
      // cout << v[0].first << " : " << i << endl;
    }
  }

  cout << res << endl;



}
