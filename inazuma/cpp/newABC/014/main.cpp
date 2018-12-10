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
  int n, x;
  cin >> n >> x;
  vector<int> v(n, 0);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int res = 0;

  for(int i = 0; i < n; i++)
  {
    if (x & (1 << i)) res += v[i];
  }
  cout << res << endl;



}
