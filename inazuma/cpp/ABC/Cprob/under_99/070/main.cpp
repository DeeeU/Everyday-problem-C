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
  int n;
  cin >> n;
  vector<ll> v(n, 0);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(all(v));

  for (int i = 0; i < n-1; i++)
  {
    v[i+1] = lcm(v[i], v[i+1]);
  }
  cout << v[n-1] << endl;
}
