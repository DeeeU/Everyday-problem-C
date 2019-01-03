#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int n, w;
vector<vector<int>> dp(500, vector<int>(10500, -1));
vector<int> vv;
vector<int> wv;

void solve(){
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j < w; j++) {
      if(j < wv[i]){
        dp[i][j] = dp[i+1][j];
      }else{
        dp[i][j] = max(dp[i+1][j], dp[i+1][j-wv[i]] + vv[i]);
      }
    }
  }
}

int main(){
  cin >> n >> w;
  for (int i = 0; i < n; i++)
  {
    int tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    wv.push_back(tmp1);
    vv.push_back(tmp2);
  }

  solve();
  cout << dp[0][w] << endl;
}
