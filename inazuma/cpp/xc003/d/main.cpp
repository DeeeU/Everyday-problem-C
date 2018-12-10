#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<ll,ll> p;

vector<vector<int>> dp(200000, vector<int>(2, -1));
int res = INT_MAX;
int n;
vector<int> v;

int dfs(int now, int sum)
{
  if(dp[n][0] != -1) dfs(n+1, dp[n][0];
  if(dp[n][0] == -1) dp[n][0] = sum;
  if(now == n) {
    dp[n][0] = sum;
    res = min(res, sum);
  }
  dfs(n+1, sum + abs(v[n] - v[n+1]));
  if(dp[n][1] != -1) return dp[n][1];
  if(dp[n][1] == -1) dp[n][1] = sum;
  if(now == n) {
    dp[n][1] = sum;
    res = min(res, sum);
  }
  dfs(n+1, sum + abs(v[n] - v[n+2]));
}

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
  dfs(0, 0);
  cout << res << endl;


}
