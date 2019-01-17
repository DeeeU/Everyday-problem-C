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
  int n, m;
  cin >> n >> m;
  vector<p> v(m, {0, 0});
  vector<int> l(m, 0);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i].first >> v[i].second >> l[i];
  }

}
