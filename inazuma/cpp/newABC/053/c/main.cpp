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
  ll x;
  cin >> x;
  ll tmp = x % 11;
  ll ans = (x / 11) * 2;
  if(tmp > 0 && tmp <= 6) ans++;
  else if(tmp > 0) ans += 2;
  cout << ans << endl;

}
