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
  int tmp1, tmp2;
  cin >> tmp1 >> tmp2;
  int tmp = tmp1 / tmp2;

  long double r = tmp1;
  long double c = tmp2;

  int res = 0;
  for (long double i = 1; i <= tmp; i++) {
    long double y = pow(r * r - i * c * i * c, 0.5);
    res += int(y / c);
  }

  cout << res * 4 << endl;

}
