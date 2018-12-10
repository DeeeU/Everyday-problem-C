#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;

ll gcd(ll a, ll b)
{
  if(b == 0) return a;
  else return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
  ll g = gcd(a, b);
  return a / g * b;
}

int main()
{
  int n;
  cin >> n;
  vector<int> v(n, 0);
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    sum += v[i];
  }

  cout << sum - n << endl;

  // ll lcmVal = v[0];

  // for (int i = 1; i < n; i++)
  // {
  //   lcmVal = lcm(lcmVal, v[i]);
  // }
  // lcmVal--;
  // cout << lcmVal << endl;
  //
  // ll res = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   res += lcmVal % v[i];
  // }

}
