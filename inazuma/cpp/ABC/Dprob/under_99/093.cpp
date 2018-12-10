#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;

int main()
{
  int q;
  cin >> q;
  ll tmp1,tmp2;
  ll res = 0;
  vector<p> v(q, {0,0});
  for (int i = 0; i < q; i++){
    cin >> tmp1 >> tmp2;
    v[i] = make_pair(tmp1, tmp2);
  }

  for (int i = 0; i < q; i++){
    if (v[i].first == 1 && v[i].second == 1) {
      cout << 0 << endl;
      continue;
    }
    long double tmp = pow(v[i].first * v[i].second, 0.5);
    // ll total = v[i].first * v[i].second;
    // ll hoge = v[i].first * v[i].second;
    ll sqrtTmp = int(tmp);
    // cout << sqrtTmp << endl;
    res = sqrtTmp * 2 - 1;

    // if (v[i].first == v[i].second && tmp == sqrtTmp)
    //   res--;

    if (tmp == sqrtTmp)
      res--;

    if (abs(v[i].first - v[i].second) == 1)
      res--;



    cout << res << endl;
  }
  return 0;
}
