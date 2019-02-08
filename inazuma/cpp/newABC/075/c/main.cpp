#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;
ll res = LLONG_MAX;
int k, n;

void full_search(vector<p> v){
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n; j++) {
      for (int test = 0; test < n; test++) {
        for (int test2 = 0; test2 < n; test2++) {
        ll max_x = max(v[i].first, v[test].first);
        ll min_x = min(v[i].first, v[test].first);
        ll max_y = max(v[test2].second, v[j].second);
        ll min_y = min(v[test2].second, v[j].second);
        if(max_x == min_x || max_y == min_y) continue;
        int count = 0;
        ll area = (max_x - min_x) * (max_y - min_y);
        for (int k = 0; k < n; k++) {
          int nx = v[k].first;
          int ny = v[k].second;
          bool is_inner_point = (nx >= min_x && nx <= max_x && ny >= min_y && ny <= max_y);
          if(is_inner_point){
            count++;
          }
        }
        // cout << max_x-min_x << " : " << max_y-min_y << endl;
        // cout << area << endl;
        if(count >= k) res = min(area, res);
        }
      }
    }
  }
}

int main(){
  cin >> n >> k;
  vector<p> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  full_search(v);
  cout << res << endl;
}
