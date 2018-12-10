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
  vector<int> a(n, 0);
  vector<int> b(n ,0);
  vector<int> c(n, 0);

  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  for (int i = 0; i < n; i++) cin >> c[i];

  sort(all(a));
  sort(all(b));
  sort(all(c));

  int res = 0;
  for(int i : b)
  {
    int tmp1 = lower_bound(all(a), i) - a.begin();
    int tmp2 = n - (upper_bound(all(c), i) - c.begin());
    res += tmp1 * tmp2;
  }
  cout << res << endl;
}
