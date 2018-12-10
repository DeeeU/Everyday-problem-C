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
  vector<int> v(n, 0);
  vector<ll> sum(n, 0);
  int tmp = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    tmp += v[i];
    sum[i] = tmp;
  }
}
