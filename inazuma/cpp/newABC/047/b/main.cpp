#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int w, h, n;
  cin >> w >> h >> n;
  vector<p> v(n,{0,0});
  vector<int> a(n, 0);
  int beginX = 0;
  int beginY = 0;

  for(int i = 0; i < n; i++)
  {
    cin >> v[i].first >> v[i].second >> a[i];
    switch (a[i]) {
      case 1:
        if(v[i].first >= w)
        {
          cout << 0 << endl;
          return 0;
        }
        else beginX = max(beginX, v[i].first);
        break;
      case 2:
        if (v[i].first <= beginX)
        {
          cout << 0 << endl;
          return 0;
        }
        else w = min(w, v[i].first);
        break;
      case 3:
        if(v[i].second >= h)
        {
          cout << 0 << endl;
          return 0;
        }
        else beginY = max(beginY,v[i].second);
        break;
      case 4:
        if (v[i].second <= beginY)
        {
          cout << 0 << endl;
          return 0;
        }
        else h = min(h, v[i].second);
        break;
    }
    // cout << "========-yyj" << endl;
    // cout << beginX << endl;
    // cout << w << endl;
    // cout << beginY << endl;
    // cout << h << endl;
  }
  cout << abs(beginX - w) * abs(beginY - h) << endl;
}
