#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()


typedef long long ll;
typedef pair<int, int> p;

int dp[500][10500];

int n, w;

vector<int> vv;
vector<int> wv;

void solve(){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= w; j++) {
      if(j < wv[i]){
        dp[i+1][j] = dp[i][j];
      } else {
        dp[i + 1][j] = max(dp[i][j], dp[i + 1][j - wv[i]] + vv[i]);
      }
    }
  }

  cout << dp[n][w] << endl;
}

int main(){
  cin >> n >> w;
  for (int i = 0; i < n; i++) {
    int tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    vv.push_back(tmp1);
    wv.push_back(tmp2);
  }

  solve();
}
