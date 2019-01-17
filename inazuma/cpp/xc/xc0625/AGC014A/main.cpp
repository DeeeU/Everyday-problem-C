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
  int a, b, c;
  cin >> a >> b >> c;
  int res = 0;

  while(true) {
    if(a == b && a == c && b == c)
    {
      cout << -1 << endl;
      return 0;
    }
    if (a % 2 == 1 || b % 2 == 1 || c % 2 == 1)
    {
      cout << 0 << endl;
      return 0;
    }

    res++;
    int tmpa = a;
    int tmpb = b;
    int tmpc = c;
    a = tmpb / 2 + tmpc / 2;
    b = tmpa / 2 + tmpc / 2;
    c = tmpa / 2 + tmpb / 2;
  }

  cout << res << endl;

}
