#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;

vector<vector<int>> other(100,vector<int>(10, 0));
vector<vector<int>> store(100,vector<int>(11, 0));
int ans = INT_MIN;
int n;

vector<int> tmp(10, 0);

void slove()
{
  int score = 0;
  for (int i = 0; i < n; i++){
    int count = 0;
    bool flag = false;
    for(int j : tmp)
    {
      if(j != 0) flag = true;
    }
    if(!flag) return;
    for (int j = 0; j < 10; j++){
      if (other[i][j] == tmp[j] && tmp[j] == 1) {
        count++;
      }
    }
    // cout << count << endl;
    // cout << store[i][count] << endl;
    score += store[i][count];
  }
  // cout << "=========-" << endl;
  // cout << score << endl;
  // cout << ans << endl;
  ans = max(score, ans);
  return;
}

void dfs(int pos)
{
  if(pos == 10)
  {
    slove();
    return;
  }
  else
  {
    tmp[pos] = 0;
    dfs(pos+1);
    tmp[pos] = 1;
    dfs(pos+1);
  }
}

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 10; j++){
      cin >> other[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 11; j++){
      cin >> store[i][j];
    }
  }
  dfs(0);
  dfs(1);

  cout << ans << endl;
  // cout << "================================" << endl;
  // for(itn i : store[0]) cout << i;
  // cout << endl;
  // for(itn i : store[1]) cout << i;

}
