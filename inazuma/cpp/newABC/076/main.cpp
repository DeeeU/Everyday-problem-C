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
  int n, k;
  cin >> n >> k;
  int res = 1;
  for (int i = 0; i < n; i++)
  {
    if(res > k) res += k;
    else res *= 2;
  }
  cout << res << endl;

}
