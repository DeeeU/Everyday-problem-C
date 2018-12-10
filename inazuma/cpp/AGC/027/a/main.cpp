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
  int n, x;
  cin >> n >> x;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(all(v));

  int res = 0;
  int count = 0;

  if(v[0] > x)
  {
    cout << 0 << endl;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    count += v[i];
    if(count == x)
    {
      res++;
      break;
    }
    else if(count > x) break;
    res++;
  }
  if(count < x) res--;

  cout << res << endl;

}
