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
  int res = 0;

  for (int i = 0; i < n-1; i++) {
    if(v[i] == i+1)
    {
      res++;
      int tmp = v[i];
      v[i] = v[i+1];
      v[i+1] = tmp;
    }
  }
  cout << res << endl;
}
