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
  int n, k;
  cin >> n >> k;
  vector<int> v(n, 0);
  int res = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i <= n-k; i++)
  {
    int l = v[i];
    int r = v[i+k-1];
    res = min(res, r - l + min(abs(l),abs(r)));
  }

  cout << res << endl;
}
