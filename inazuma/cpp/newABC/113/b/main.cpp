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
  long double n, t, a;
  cin >> n >> t >> a;
  vector<long double> v;
  int res = -1;
  long double sa = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    long double tmp;
    cin >> tmp;
    if(sa > abs(a - (t - tmp * 0.006)))
    {
      sa = abs(a - (t - tmp * 0.006));
      res = i;
    }
  }
  cout << res + 1 << endl;


}
