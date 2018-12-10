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
  ll a, b, c;
  cin >> a >> b >> c;
  ll res = 0;
  ll tmp1 = 0;
  ll tmp2 = 0;
  tmp1 = (a-1) / c + 1;
  tmp2 = b / c + 1;
  if(a == 0) tmp1 = 0;
  if(b == 0)tmp2 = 1;
  res = tmp2 - tmp1;
  cout << res << endl;
}
