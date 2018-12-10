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
  long double n, m, d;
  cin >> n >> m >> d;
  long double tmp = 2 * (n - d) * (m - 1);
  long double tmp2 = 1;
  if(n > 1)
  {
    // cout << 2 * (n - d) * (m - 1) * (pow((n-2), m-2) / pow(n, m)) << endl;
    for (int i = 0; i < m-2; i++)
    {
      tmp2 *= (n-2);
      tmp2 /= n;
    }
    tmp2 /= n;
    tmp2 /= n;
  }

  else
  {
    tmp2 /= pow(n, m);
  }
  cout << tmp * tmp2 << endl;
}
