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
  int n;
  cin >> n;
  vector<string> v(n, "@");
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 1; i < n; i++) {
    if(v[i-1][int(v[i-1].size())-1] != v[i][0])
    {
      cout << "No" << endl;
      return 0;
    }
    for (int j = 0; j < n; j++) {
      if(v[i] == v[j] && i != j)
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;


}
