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
  int l, n;
  cin >> l >> n;
  vector<int> v(n, 0);
  ll res = 0;
  int now = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  bool left = false;
  while(v.size() > 0){
    int size = int(v.size());
    if(left) now *= -1;
    if(left) v[0] *= -1;
    int d1 = abs(now + (l * int(left)) - v[0]);
    if(left) now *= -1;
    if(left) v[0] *= -1;

    int d2 = abs(now + (l * int(!left)) - v[size-1]);
    if(d1 > d2){
      res += d1;
      now = v[0];
      v.erase(v.begin() + 0);
      left = false;
    }else{
      res += d2;
      now = v[size-1];
      v.erase(v.begin() + size-1);
      left = true;
    }
  }

  cout << res << endl;
}
