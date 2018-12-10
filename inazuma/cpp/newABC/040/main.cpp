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
  int n;
  cin >> n;
  int ans = INT_MAX;
  for(int i = 1; i <= n; i++)
  {
    int h = i;
    int w = n / h;
    int amari = n - h * w;
    ans = min(ans, abs(h-w) + amari);
  }
  cout << ans << endl;
}
