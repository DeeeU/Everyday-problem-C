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
  int a, b, c, d;
  cin >> a >> b >> c >>d;
  vector<int> v(max({a, b, c, d})+2, 0);
  v[a]++;
  v[b+1]--;
  v[c]++;
  v[d+1]--;

  int begin = 0, end = 0;

  for (int i = 1; i < max({a, b, c, d})+2; i++)
  {
    v[i] += v[i-1];
  }
  int res = 0;
  for (int i = 1; i < max({a, b, c, d})+2; i++)
  {
    res += (v[i] == 2);
    //if(v[i-1] == 2 && v[i] == 1) end = i;
    //if(v[i-1] == 1 && v[i] == 2) begin = i;
  }

  if(b <= c || d <= a) cout << 0 << endl;
  else if(c >= a && d <= b) cout << d - c << endl;
  else if(a >= c && b <= d) cout << b - a << endl;
  else
  {
    if(a <= c) cout << abs(c - b) << endl;
    else cout << abs(d - a) << endl;
  }
//   for(int i : v) cout << i << endl;
  // if(res == 0) cout << res << endl;
  // else cout << res - 1 << endl;
}
