#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

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
  int n, x;
  cin >> n >> x;
  vector<int> v(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    v[i] -= x;
  }

  ll res = v[0];
  for (int i = 1; i < n; i++) {
    res = gcd(res, v[i]);
  }

  cout << abs(res) << endl;
}
