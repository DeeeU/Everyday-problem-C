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
  ll n, m;
  cin >> n >> m;
  vector<ll> v(n, 0);
  for(int i = 0; i < n; i++) cin >> v[i];
  vector<ll> sum;
  sum.push_back(0);
  for(int i = 0; i < n; i++)
  {
    sum.push_back(sum[i] + v[i]);
  }
  for(int i = 0; i < n+1; i++)
  {
    sum[i] %= m;
  }
  // sum.erase(sum.begin());
  map<int, int> mp;
  ll count = 0;
  for(int i = 0; i <= n; i++)
  {
    count += mp[sum[i]];
    mp[sum[i]]++;
  }

  cout << count << endl;


}
