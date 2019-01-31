#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int n, ma, mb;

struct Info {
  int a;
  int b;
  int cost;
};


// asc sort
bool cmp(const Info &x, const Info &y)
{
  return x.cost < y.cost;
}

vector<Info> v;
int dp[100][401][401];

int res = INT_MAX;

void dp_init(){
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 401; j++) {
      for (int k = 0; k < 401; k++) {
        dp[i][j][k] = INT_MAX;
      }
    }
  }
  dp[0][0][0] = 0;
}

void dfs(int step, int a, int b, int sum){
  if(step == n) return;
  if(a * mb == b * ma && a != 0 && b != 0){
    res = min(res, sum);
    return;
  }
  dfs(step+1, a, b, sum);
  dfs(step+1, a + v[step].a, b + v[step].b, sum + v[step].cost);
}


int main(){
  dp_init();

  cin >> n >> ma >> mb;
  for (int i = 0; i < n; i++) {
    int tmp1, tmp2, tmp3;
    cin >> tmp1 >> tmp2 >> tmp3;
    Info tmp = {tmp1, tmp2, tmp3};
    v.push_back(tmp);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 400; j++) {
      for (int k = 0; k < 400; k++) {
        if(dp[i][j][k] == INT_MAX) continue;
        dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
        dp[i+1][j+v[i].a][k+v[i].b] =
          min(dp[i+1][j+v[i].a][k+v[i].b], dp[i][j][k] + v[i].cost);
      }
    }
  }

  for (int i = 1; i < 401; i++) {
    for (int j = 1; j < 401; j++) {
      if(i * mb == j * ma)
        res = min(res, dp[n][i][j]);
    }
  }

  if(res != INT_MAX) cout << res << endl;
  else cout << -1 << endl;
}
