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
  int gusu = 0, kisu = 0;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if(v[i] % 2 == 0) gusu++;
    else kisu++;
  }
  ll res = pow(3, n) - pow(2, gusu);
  cout << res << endl;


}
