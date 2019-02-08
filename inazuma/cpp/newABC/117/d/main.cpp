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
    for (ll j = 0; j < 50; j++) {
      if(v[i] & (1ll<<j)){
        count[j]++;
      }
    }
  }

  for (int i = 0; i < 50; i++) {
    if((count[i] > double(n / 2))){
      count[i] = (n - count[i]) * pow(2, i);
    }
  }

  print(count);

}
