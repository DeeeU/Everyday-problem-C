#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<ll, ll> p;

int n, w;

int main(){
  cin >> n >> w;
  vector<p> v1;
  vector<p> v2;
  vector<p> v3;
  vector<p> v4;
  vector<p> v;
  for (int i = 0; i < n; i++) {
    int tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    v.push_back({tmp1, tmp2});
  }
  sort(all(v));
  int tmp = v[0].first;

  for(auto a : v){
    if(a.first == tmp) v1.push_back({a.second, a.first});
    if(a.first == tmp+1) v2.push_back({a.second, a.first});
    if(a.first == tmp+2) v3.push_back({a.second, a.first});
    if(a.first == tmp+3) v4.push_back({a.second, a.first});
  }
  sort(rall(v1));
  sort(rall(v2));
  sort(rall(v3));
  sort(rall(v4));

  ll res = 0;

  for (int i = 0; i <= int(v1.size()); i++) {
    for (int j = 0; j <= int(v2.size()); j++) {
      for (int k = 0; k <= int(v3.size()); k++) {
        for (int l = 0; l <= int(v4.size()); l++) {
          // int w_sum = v1[0].second * i + v2[0].second * j + v3[0].second * k + v4[0].second * l;
          ll w_sum = 0;
          if(v1.size() > 0) w_sum += v1[0].second * i;
          if(v2.size() > 0) w_sum += v2[0].second * j;
          if(v3.size() > 0) w_sum += v3[0].second * k;
          if(v4.size() > 0) w_sum += v4[0].second * l;

          if(w_sum > w) continue;
          ll sum = 0;
          for (int ii = 0; ii < i; ii++) sum += v1[ii].first;
          for (int jj = 0; jj < j; jj++) sum += v2[jj].first;
          for (int kk = 0; kk < k; kk++) sum += v3[kk].first;
          for (int ll = 0; ll < l; ll++) sum += v4[ll].first;
          res = max(res, sum);
        }
      }
    }
  }
  cout << res << endl;
}
