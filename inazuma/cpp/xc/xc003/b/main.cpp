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
  string o, e;
  cin >> o >> e;
  for (int i = 0; i < int(e.size()); i++)
  {
    cout << o[i] << e[i];
  }
  if(o.size() > e.size()) cout << o[o.size()-1] << endl;
  else cout << endl;
}
