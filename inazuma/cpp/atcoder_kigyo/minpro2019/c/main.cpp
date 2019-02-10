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
  ll k, a, b;
  cin >> k >> a >> b;
  ll res = 1;
  ll num = 0;
  num =  a-1;
  ll nokori = k - num;

  if(nokori < 2 || b - a <= 2){
    cout << k+1 << endl;
    return 0;
  }

  res = a;
  res += (b - a) * (nokori / 2);

  if(nokori % 2 == 1){
    res++;
  }
  cout << res << endl;

}
