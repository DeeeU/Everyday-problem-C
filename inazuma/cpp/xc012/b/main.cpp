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
  int n, m, k;
  cin >> n >> m >> k;
  int minv = min(n, m);
  int minv2 = n + m - 2;
  if(k > n * m || k < minv) cout << "No" << endl;
  else
  {
    if(k < minv2) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
}
