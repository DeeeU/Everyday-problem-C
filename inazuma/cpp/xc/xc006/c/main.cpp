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
  int x, y;
  cin >> x >> y;
  if(x < y) cout << min(y-x, abs(y+x)+1) << endl;
  else cout << min(1+x-y, abs(x+y))+1 << endl;
}
