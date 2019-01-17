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
  map<int, int> mp;
  map<int, int> mpRev;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    mp[tmp]++;
  }

  vector<p> v;
  for(auto a: mp)
  {
    v.push_back({a.second, a.first});
  }
  sort(rall(v));
  // for(auto a: v) cout << a.first << " : " << a.second << endl;

  int count = 0;
  for(auto a : v)
  {
    if(a.first > 1) count += a.first-1;
  }
  if(count % 2 == 1) count++;
  cout << n - count << endl;

}
