#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;

vector<int> v(4, 0);
vector<int> ope(3, 0);

void judgeOpe(int a)
{
  switch (a) {
    case -1:
      cout << '-';
      break;
    case 1:
      cout << '+';
      break;
  }
}


void dfs(int pos, int res)
{
  // cout << "pos: " << pos << endl;
  // cout << "res: " << res << endl;
  // cout << "=========" << endl;
  if(pos == 3 && res == 7)
  {
    cout << v[0];
    judgeOpe(ope[0]);
    cout << v[1];
    judgeOpe(ope[1]);
    cout << v[2];
    judgeOpe(ope[2]);
    cout << v[3] << "=7" << endl;
    exit(0);
  }
  else if(pos == 3) return;
  else
  {
    ope[pos] = 1;
    res += v[pos+1];
    dfs(pos+1, res);
    ope[pos] = -1;
    res -= v[pos+1] * 2;
    dfs(pos+1, res);
    return;
  }
}


int main()
{
  string s;
  cin >> s;

  char tmp = s[0];
  v[0] = tmp - '0';
  tmp = s[1];
  v[1] = tmp - '0';
  tmp = s[2];
  v[2] = tmp - '0';
  tmp = s[3];
  v[3] = tmp - '0';
  // for (int i = 0; i < 4; i++)
  // {
  //   cout << v[i] + 1 << endl;
  // }
  dfs(0, v[0]);




}
