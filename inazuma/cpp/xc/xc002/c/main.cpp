#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  #define int long long
  int n;
  cin >> n;
  int gu = 0, ki = 0;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(v[i] % 2 == 0) gu++;
    else ki++;
  }
  gu += ki / 2;
  // cout << gu << endl;
  ki %= 2;
  // cout << ki << endl;
  if(ki == 0)cout << "YES" << endl;
  else cout << "NO" << endl;

}
