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
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int res = v[0] / 2;
  v[0] %= 2;
  for (int i = 1; i < n-1; i++) {
    if(v[i-1] % 2 == 1 && v[i+1] % 2 == 1 && v[i] >= 2)
    {
      res += 2;
      v[i-1]--;
      v[i+1]--;
      v[i] -= 2;
    }
    else if(v[i-1] % 2 == 1 && v[i] >= 1)
    {
      res++;
      v[i-1]--;
      v[i]--;
    }
    res += v[i] / 2;
    v[i] %= 2;
  }

  res += v[n-1] / 2;
  if(v[n-2] == 1 && v[n-1] % 2 == 1) res++;

  cout << res << endl;
}
