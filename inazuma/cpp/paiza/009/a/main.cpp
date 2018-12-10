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
  int h, w;
  cin >> h >> w;
  vector<string> v;
  for (int i = 0; i < h; i++)
  {
    string tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  int res = 0;
  int y = 0, x = 0;
  int dx = 1;
  int dy = 0;
  while(x >= 0 && y >= 0 && x < w && y < h)
  {
    // cout << res << endl;
    res++;
    if(v[y][x] == '/')
    {
      if(dy != 0)
      {
        if(dy == 1) dx = -1;
        else dx = 1;
        dy = 0;
      }
      else{
        if(dx == 1) dy = -1;
        if(dx == -1) dy = 1;
        dx = 0;
      }
    }


    if(v[y][x] == '\\')
    {
      if(dy != 0)
      {
        if(dy == 1) dx = 1;
        else dx = -1;
        dy = 0;
      }
      else{
        if(dx == 1) dy = 1;
        if(dx == -1) dy = -1;
        dx = 0;
      }
    }
    y += dy;
    x += dx;
  }

  cout << res << endl;
}
