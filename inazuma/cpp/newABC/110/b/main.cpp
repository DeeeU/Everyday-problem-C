#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  vector<int> vx(n, 0);
  vector<int> vy(m, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> vx[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> vy[i];
  }

  for (int i = x+1; i <= y; i++) {
    bool flag = true;
    for (int j = 0; j < n; j++) {
      if(i <= vx[j]){
        flag = false;
        break;
      }
    }
    for (int j = 0; j < m; j++) {
      if(i > vy[j]){
        flag = false;
        break;
      }
    }
    if(flag){
      cout << "No War" << endl;
      return 0;
    }
  }

  cout << "War" << endl;

}
