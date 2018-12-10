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
  itn n;
  cin >> n;
  vector<int> v(n, 0);
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    mp[v[i]]++;
    mp[v[i]+1]++;
    mp[v[i]-1]++;
  }

  int maxv = -1;
  int res = -1;
  for(auto a : mp)
  {
    if (a.second >= maxv)
    {
      maxv = a.second;
      res = a.first;
    }
  }
  cout << maxv << endl;

}
