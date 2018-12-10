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
  int n, d, x;
  cin >> n >> d >> x;
  vector<int> v(n, 0);
  int res = 0;
  int tmp = d- x;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    res += tmp/v[i] + 1;
  }
  cout << res << endl;


}
