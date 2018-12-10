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
  #define int long long
  int n, k;
  cin >> n >> k;
  vector<p> a(n, {0, 0});
  for(int i = 0; i < n; i++)
  {
    cin >> a[i].first >> a[i].second;
  }

  sort(all(a));

  for(auto i : a)
  {
    k -= i.second;
    if(k <= 0) {
      cout << i.first << endl;
      return 0;
    }
  }
}
