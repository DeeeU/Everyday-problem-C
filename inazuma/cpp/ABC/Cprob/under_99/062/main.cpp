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
  // #define int long long
  ll h, w;
  cin >> h >> w;
  if(h % 3 == 0 || w % 3 == 0){
    cout << 0 << endl;
    return 0;
  }

  ll res = INT_MAX;
  ll area1 = (w/3 + 1) * h;
  ll area2 = (w - (w/3 + 1)) * (h / 2);
  ll area3 = h*w - (area1 + area2);
  res = min(res, abs(max({area1, area2, area3}) - min({area1, area2, area3})));

  area1 = (h/3 + 1) * w;
  area2 = (h - (h/3 + 1)) * (w / 2);
  area3 = h*w - (area1 + area2);
  res = min(res, abs(max({area1, area2, area3}) - min({area1, area2, area3})));


  area1 = (w/3) * h;
  area2 = (w - (w/3)) * (h / 2);
  area3 = h*w - (area1 + area2);
  res = min(res, abs(max({area1, area2, area3}) - min({area1, area2, area3})));

  area1 = (h/3) * w;
  area2 = (h - (h/3)) * (w / 2);
  area3 = h*w - (area1 + area2);
  res = min(res, abs(max({area1, area2, area3}) - min({area1, area2, area3})));

  area1 = (w/3 - 1) * h;
  area2 = (w - (w/3 - 1)) * (h / 2);
  area3 = h*w - (area1 + area2);
  res = min(res, abs(max({area1, area2, area3}) - min({area1, area2, area3})));

  area1 = (h/3 - 1) * w;
  area2 = (h - (h/3 - 1)) * (w / 2);
  area3 = h*w - (area1 + area2);
  res = min(res, abs(max({area1, area2, area3}) - min({area1, area2, area3})));
  // cout << a << endl;
  // cout << b << endl;
  // cout << d << endl;
  // cout << e << endl;
  cout << res << endl;

}
