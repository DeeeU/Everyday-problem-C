#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;

vector<string> a;
vector<string> b;
int n, m;

bool check(int x, int y)
{
  for (int i = 0; i < m; i++)
  {
    if(b[i] != a[y+i].substr(x, m)) return false;
  }
  return true;
}

int main()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    string tmp;
    cin >> tmp;
    a.push_back(tmp);
  }
  for (int i = 0; i < m; i++)
  {
    string tmp;
    cin >> tmp;
    b.push_back(tmp);
  }

  // for (int i = 0; i < n; i++)
  // {
  //   cout << a[i] << endl;
  // }
  // for (int i = 0; i < m; i++)
  // {
  //   cout << b[i] << endl;
  // }
  // cout << a.size() << endl;
  // cout << b.size() << endl;

  for (int i = 0; i <= n - m; i++)
  {
    for (int j = 0; j <= n - m; j++)
    {
      if(check(i, j)){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
