#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int main(){
  int n;
  ll k;
  cin >> n >> k;
  vector<ll> v(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  vector<ll> count(50, 0);

  for (int i = 0; i < n; i++) {
    // bitset<50> tmp = bitset<50> (v[i]);
    // cout << tmp << endl;
    for (ll j = 0; j < 50; j++) {
      if(v[i] & (1ll<<j)){
        count[j]++;
      }
    }
  }

  if(n == 1 && k == 0){
    cout << v[0] << endl;
    return 0;
  }

  int goal = -1;
  for (int i = 49; i >= 0; i--) {
    if(count[i] != 0) {
      goal = i;
      break;
    }
  }


  ll res = 0;
  for (int i = 0; i <= goal; i++) {
    if(double(count[i]) <= double(n / 2)){
      res += pow(2, i);
    }
  }

  for (int i = goal+1; i < 50; i++){
    if(res + pow(2, i) < k) res += pow(2, i);
    else break;
  }


  ll res2 = -1;
  for (int i = res; i <= k; i++) {
    ll next_res = 0;
    for (int j = 0; j < n; j++) {
      next_res += v[j] ^ i;
    }
    res2 = max(res2, next_res);
  }

  cout << res2 << endl;
}
