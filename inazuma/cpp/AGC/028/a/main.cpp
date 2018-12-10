using namespace std;
#include <bits/stdc++.h>

#if __has_include("print.hpp")
#include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<ll, ll> p;

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

int main(){
  ll n, m;
  string s, t;
  cin >> n >> m >> s >> t;
  ll l = lcm(n, m);
  ll g = gcd(n, m);

  vector<ll> sv;
  vector<ll> tv;
  for (ll i = 0; i < n; i++) {
    if(i * l / n + 1 <= n) sv.push_back(i * l / n + 1);
  }

  for (ll i = 0; i < m; i++) {
    if(i * l / m + 1 <= m) tv.push_back(i * l / m + 1);
  }

  // prll(sv);
  // prll(tv);

  for (ll i = 0; i < ll(sv.size()); i++)
  {
    for (ll j = 0; j < ll(tv.size()); j++)
    {
      if(i / n == j / m && s[i] != t[j])
      {
        cout << -1 << endl;
        return 0;
      }
      if(sv[i] < tv[j]) break;
    }
  }

  cout << l << endl;
}
