#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;


map<ll, ll> bunkai(ll p){
  map<ll, ll> mp;
  ll maxv = pow(p, 0.5) + 1;
  for (ll i = 2; i <= maxv; i++) {
    while(p % i == 0){
      mp[i]++;
      p /= i;
    }
  }
  return mp;
}


int main(){
  ll n, p;
  cin >> n >> p;
  if(n == 1){
    cout << p << endl;
    return 0;
  }
  bunkai(p);
  // print(mp);

  ll res = 1;

  for(auto i : mp){
    ll tmp = i.second / n;
    if(tmp < 1) continue;
    res *= pow(i.first, tmp);
  }
  cout << res << endl;
}
