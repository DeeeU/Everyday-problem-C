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
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  sort(all(v));
  int res = 0;
  int res2 = 0;

  for (int i = 0; i < (n-2)/2; i++)
  {
    res -= v[i] * 2;
  }

  res -= v[(n-2)/2];
  if(n % 2 == 1)
    res -= v[(n-2)/2+1];
  else
    res += v[(n-2)/2+1];

  for (int i = (n-2)/2+2; i < n; i++)
  {
    res += v[i] * 2;
  }

  cout << res << endl;
}
