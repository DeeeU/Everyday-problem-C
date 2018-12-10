using namespace std;
#include <bits/stdc++.h>

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int main(){
  ll n;
  cin >> n;
  vector<ll> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  double res = 1.5 * double(v[0] + v[n-1]);
  ll resInt = 0;
  // ll amari = 1000000007;

  for (int i = 2; i <= n; i++)
  {
    res *= double(i);
    // if(i % 2 == 0)
    // {
    //   resInt = res;
    //   resInt %= amari;
    //   res = resInt;
    // }
  }
  resInt = res;

  ll sum = 0;
  for (int i = 1; i < n-1; i++) {
    sum += v[i];
  }

  for (int i = 2; i <= n; i++)
  {
    sum *= i;
  }

  sum *= 2;

  cout << resInt + sum << endl;
}
