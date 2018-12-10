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
  map<int, int> mp;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    mp[v[i]]++;
  }
  // for(auto i : mp){
  //   cout << i.first << " : " << i.second << endl;
  // }

  int res = 0;
  for(auto a : mp)
  {
    if(a.second % 2 == 1) res++;
  }
  cout << res << endl;
}
