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
  int n, x;
  string s;
  cin >> n >> x >> s;
  vector<int> v(n);
  ll res = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(s[i] == '0') res += v[i];
    else {
      if(x < v[i]) res += x;
      else res += v[i];
    }
  }
  cout << res << endl;

}
