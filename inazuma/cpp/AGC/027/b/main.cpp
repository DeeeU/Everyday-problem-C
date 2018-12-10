#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<ll,ll> p;

int n, x;
vector<int> v(1, 0);

int res = INT_MAX;

void dfs(int now, int ene, int suteta)
{
  if(suteta == n)
  {
   cout << ene << endl;
    res = min(res, ene);
    return;
  }

  int next = now;
  for (int i = now+1; i <= n; i++) {
    int gomi = 0;
    ene += v[i];
    for (int j = i; j > next; j--) {
      int d = v[j] - v[j-1];
      ene += (gomi+1)*(gomi+1) * d;
      ene += x;
      gomi++;
    }
    ene += next + (gomi+1) * (gomi+1);
    suteta += gomi;
    cout << gomi << endl;
    gomi = 0;
    ene += x;
    ene += v[next];
    cout << next << " : " << ene << " : " << suteta << endl;

    dfs(next, ene, suteta);
  }
}


int main()
{
  cin >> n >> x;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  dfs(0, 0, 0);
  cout << res << endl;

  // vector<int> sum(1, 0);
  // for (int i = 1; i < n; i++) {
  //   sum.push_back(v[i] + sum[i-1]);
  // }
}
