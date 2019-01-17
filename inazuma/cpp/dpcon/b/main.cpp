#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

vector<int> dp(100500, 0);
vector<int> v;

int n, k;

void dfs(){
  for (int i = 2; i < n; i++) {
    int minv = INT_MAX;
    for (int j = 1; j <= k && i - j >= 0; j++) {
      minv = min(dp[i-j] + abs(v[i-j] - v[i]), minv);
    }
    dp[i] = minv;
  }

  cout << dp[n-1] << endl;
}

int main(){
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  dp[0] = 0;
  dp[1] = abs(v[0] - v[1]);

  dfs();


}
