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
  int n, h, w;
  cin >> n >> h >> w;
  vector<p> v(n, {0, 0});

  int res = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i].first >> v[i].second;
    if(v[i].first >= h && v[i].second >= w) res++;
  }
  cout << res << endl;

}
