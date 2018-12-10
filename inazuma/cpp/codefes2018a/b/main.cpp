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
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  vector<p> v(m, {0, 0});
  vector<bool> isA(n,false);
  for (int i = 0; i < m; i++) {
    cin >> v[i].first >> v[i].second;
    for (int j = v[i].first-1; j < v[i].second; j++) {
      isA[j] = true;
    }
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    if(isA[i]) sum += a;
    else sum += b;
  }

  cout << sum << endl;

}
