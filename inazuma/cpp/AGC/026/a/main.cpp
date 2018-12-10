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
  int n;
  cin >> n;
  vector<int> v(n, 0);
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int tmp = v[0];
  for (int i = 1; i < n; i++)
  {
    // cout << i << endl;
    if(tmp == v[i]) {
      res++;
      tmp = -1;
      continue;
    }
    tmp = v[i];
  }
  cout << res << endl;

}
