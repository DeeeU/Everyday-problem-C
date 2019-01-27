#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
#include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int main() {
  int n, m;
  cin >> n >> m;
  vector<p> v(n, {0, 0});
  map<int, int> directed;
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
    directed[v[i].second]++;
  }
  sort(all(v));
  for (int i = 0; i < n; i++) {
    if(directed[i] >= 2){

    }
  }
}
