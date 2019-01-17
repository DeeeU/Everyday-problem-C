#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

vector<vector<int>> dp(100, vector<int>(100, -1));

// w v
vector<vector<int>> vv = {{2, 3}, {1, 2}, {3, 4}, {2, 2}};
int n = 4;

int dfs(int step, int maxw)
{
  int res;
  if(dp[step][maxw] >= 0) return dp[step][maxw];
  if(step == n) res = 0;
  else if(maxw < vv[step][0])
    res = dfs(step+1, maxw);
  else
    res = max(dfs(step+1, maxw), dfs(step + 1, maxw - vv[step][0]) + vv[step][1]);
  return res;
}

int main(){
  printf("%d\n",dfs(0, 5));
}
