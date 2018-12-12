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
  vector<p> v(n, {0, 0});
  vector<int> h(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second >> h[i];
  }

  for (int x = 0; x < 101; x++)
  {
    for (int y = 0; y < 101; y++)
    {
      int H;
      for (int i = 0; i < n; i++) {
        if(h[i] != 0){
          H = h[i] + abs(x - v[i].first) + abs(y - v[i].second);
          break;
        }
      }
      bool flag = true;
      for (int i = 0; i < n; i++)
      {
        if(h[i] != max(H - abs(x - v[i].first) - abs(y - v[i].second), 0))
        {
          flag = false;
          break;
        }
      }
      if(flag){
        cout << x << " " << y << " " << H << endl;
        return 0;
      }
    }
  }
}
