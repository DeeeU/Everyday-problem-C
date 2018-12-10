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
  int n, q;
  cin >> n >> q;
  vector<p> v(q, {0, 0});
  vector<int> map(n+1, 0);
  for (int i = 0; i < q; i++)
  {
    cin >> v[i].first >> v[i].second;
    map[v[i].first-1]++;
    map[v[i].second]--;
  }

  for (int i = 1; i < n; i++)
  {
    map[i] += map[i-1];
    // cout << map[i-1] << endl;
  }

  for (int i = 0; i < n; i++)
  {
    if(map[i] % 2 == 0) cout << 0;
    else cout << 1;
  }
  cout << endl;


}
