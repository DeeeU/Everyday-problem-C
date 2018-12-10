#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;

vector<int> moneySet;
vector<ll> dp(100000, 0);
int res = INT_MAX;
int n;
int tmp;
// int count = 0;

void dfs(int pos,int count) {
  // cout << res << endl;
  if(pos < 6) {
    dp[pos] = count + pos;
    res = min(res, count + pos);
    return;
  }
  // if(dp[pos] != 0)
  // {
  //   pos = dp[pos];
  // }
  for(int i : moneySet)
  {
    if (i <= pos) {
      // count++;
      // cout << pos - i << endl;
      dfs(pos - i, count + 1);
    }
  }
  return;
}

int main()
{
  cin >> n;
  tmp = n;
  for (int i = 1; i < 8; i++){
    if (pow(6, i) <= 100000) {
      moneySet.push_back(pow(6, i));
    }
  }
  for (int i = 1; i < 8; i++){
    if (pow(9, i) <= 100000) {
      moneySet.push_back(pow(9, i));
    }
  }
  sort(all(moneySet));
  dfs(n, 0);

  cout << res << endl;


}
