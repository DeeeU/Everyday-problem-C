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
  cin >> n;
  vector<int> v(n, 0);
  vector<p> hoge(n, {0, 0});
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    hoge[i].first = v[i];
    hoge[i].second = i;
    sum += v[i];
  }
  sort(all(hoge));

  int tmp = 0;
  for (int i = 0; i < n; i++) {
    tmp += hoge[i].first*(i+1);
  }

  vector<int> resVec(n, 0);
  for (int i = 0; i < n; i++) {
    // auto index = lower_bound(v.begin(), v.end(), hoge[i]) - v.begin();
    int res = tmp - hoge[i].first*(i+1);
    sum -= hoge[i].first;
    // cout << res - sum << endl;
    resVec[hoge[i].second] = res - sum;
  //   cout << index << endl;
  }

  for (int i = 0; i < n; i++) {
    cout << resVec[i] << endl;
  }



}
