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
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  vector<int> sum(1, 0);
  map<int, int> mp;

  for (int i = 0; i < n; i++)
  {
    sum.push_back(sum[i] + v[i]);
  }

  int res = 0;
  mp[v[0]]++;
  for (int i = 2; i < n; i++)
  {
    mp[v[i-1]]++;
    mp[sum[i]]++;
    mp[v[i-1]+v[i]]++;
  }
  mp[sum[n]]++;
  mp[v[n-1]]++;

  for(auto a : mp)cout << a.first << " : " << a.second << endl;

}
