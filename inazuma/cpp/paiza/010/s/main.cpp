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
  int t, b, u, l, d, r;
  int n;
  cin >> t >> b >> u >> d >> l >> r >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  vector<p> kumi{{l, r}, {u, d}, {t, b}};

  int now = t;
  int res = 0;

  for (int i = 0; i < n; i++)
  {
    if(v[i] == now) continue;
    bool flag = true;
    for (int j = 0; j < 3; j++)
    {
      if((now == kumi[j].first && v[i] == kumi[j].second) ||
          (now == kumi[j].second && v[i] == kumi[j].first))
      {
        flag = false;
        res += 2;
      }
    }
    if(flag) res++;
    now = v[i];
  }

  cout << res << endl;






}
