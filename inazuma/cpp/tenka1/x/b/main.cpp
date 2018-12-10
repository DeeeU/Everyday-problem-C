using namespace std;
#include <bits/stdc++.h>

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
// typedef pair<int, int> p;

int main(){
  int n;
  cin >> n;
  vector<pair<int, int>> v(n, {0, 0});
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(all(v));
  cout << v[0].first + v[0].second << endl;
}
