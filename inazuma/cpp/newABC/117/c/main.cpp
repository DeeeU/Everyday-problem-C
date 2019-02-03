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
  int n, m;
  cin >> n >> m;
  vector<int> v(m, 0);
  for (int i = 0; i < m; i++){
    cin >> v[i];
  }

  if(n >= m){
    cout << 0 << endl;
    return 0;
  }

  sort(all(v));
  vector<int> tmp(m, 0);
  ll res = 0;

  for (int i = 1; i < m; i++) {
    tmp[i] = v[i] - v[i-1];
    res += tmp[i];
  }
  sort(rall(tmp));
  for (int i = 0; i < n-1; i++) {
    res -= tmp[i];
  }

  cout << res << endl;


}
