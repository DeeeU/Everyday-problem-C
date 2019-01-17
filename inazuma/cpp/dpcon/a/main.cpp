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

int n;

void dfs(){
  for (int i = 2; i < n; i++) {
    dp[i] = min(dp[i-1] + abs(v[i-1] - v[i]), dp[i-2] + abs(v[i-2] - v[i]));
  }

  // print(v);
  // print(dp);

  cout << dp[n-1] << endl;
}

int main(){
  cin >> n;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  dp[0] = 0;
  dp[1] = abs(v[0] - v[1]);

  dfs();


}
