#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

long long comb(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

int main(){
  int n, a, b;
  cin >> n >> a >> b;
  vector<ll> v(n, 0);
  map<ll, ll> tmp;
  ll kanousei = 1;
  long double sum = 0, num = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(rall(v));

  for (int i = 0; i < n; i++) {
    if(num < a || (num < b && tmp[v[i]] > 0)){
      if(num < a) num++;
      tmp[v[i]]++;
    }
  }

  bool flag = false;
  ll not_min = 0;

  // tmp.first -> value
  // tmp.second -> num
  for(auto i : tmp){
    if(i.second > 0) {
      if(tmp.size() == 1) flag = true;
      if(i.first != tmp.begin()->first) not_min += i.second;
      sum += i.first * i.second;
    }
  }
  sum -= tmp.begin()->first * (tmp.begin()->second - (a - not_min));
  kanousei = comb(tmp.begin()->second, a - not_min);

  if(flag){
    kanousei = 0;
    for (ll i = a; i <= b; i++) {
      kanousei += comb(tmp[sum], i);
    }
  }


  long double ave = sum / num;
  printf("%Lf\n%lld\n",ave, kanousei);

}
