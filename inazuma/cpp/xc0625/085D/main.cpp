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
  int n, h;
  cin >> n >> h;
  vector<int> a(n, 0);
  vector<int> b(n, 0);

  // int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
  }
  int res = 0;
  sort(rall(a));
  sort(rall(b));

  int tmp = n;
  for (int i = 0; i < n; ++i)
  {
    if(a[0] >= b[i]) {
      tmp = i;
      break;
      // cout << "===" << endl;
    }
  }

  // for(int i : b) cout << i << endl;

  // cout << tmp << endl;
  for (int i = 0; i < tmp; i++)
  {
    res++;
    h -= b[i];
    if(h <= 0){
      cout << res << endl;
      return 0;
    }
  }
  // cout << res << endl;

  // cout << h << endl;
  // while(h > 0) {
  //   res++;
  //   h -= a[0];
  // }

  res += ceil(double(h) / double(a[0]));
  cout << res << endl;

}
