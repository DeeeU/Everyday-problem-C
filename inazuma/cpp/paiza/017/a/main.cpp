#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int h, w, n;
vector<vector<bool>> isBlock;

void stackBlock(p block, int d, int start) {
  for (int i = start; i > start - block.first; i--)
  {
    for (int j = d; j < d + block.second; j++)
    {
      isBlock[i][j] = true;
    }
  }
}

void func(p block, int d) {
  for (int i = block.first-1; i < h; i++) {
    bool flag = true;
    for (int k = i; k > i - block.first; k--) {
      for (int j = d; j < block.second + d; j++) {
        if(isBlock[k][j]){
          flag = false;
          break;
        }
      }
    }
    if(!flag){
      stackBlock(block, d, i-1);
      return;
    }
  }
  stackBlock(block, d, h-1);
}

void printRes() {
  for(auto i : isBlock){
    for(auto j : i){
      if(j) cout << '#';
      else cout << '.';
    }
    cout << endl;
  }
}

int main(){
  cin >> h >> w >> n;
  vector<vector<bool>> tmp(h, vector<bool>(w, false));
  isBlock = tmp;
  vector<p> v;
  vector<int> x;
  for (int i = 0; i < n; i++) {
    pair<int, int> tmp1;
    int tmp2;
    cin >> tmp1.first >> tmp1.second >> tmp2;
    v.push_back(tmp1);
    x.push_back(tmp2);
    func(tmp1, tmp2);
  }
  printRes();

}
