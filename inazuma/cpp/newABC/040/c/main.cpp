using namespace std;
#include <bits/stdc++.h>

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int n;
vector<int> v;

vector<int> dp(200000, 0);

void solve(){
  dp[1] = abs(v[1] - v[0]);
  for (int i = 2; i < n; i++) {
    dp[i] = min(abs(v[i] - v[i-2]) + dp[i-2],
        abs(v[i] - v[i-1]) + dp[i-1]);
  }
  cout << dp[n-1] << endl;
}

int main(){
  cin >> n;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
  solve();
}
