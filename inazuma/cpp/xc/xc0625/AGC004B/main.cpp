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
  int n, x;
  cin >> n >> x;
  vector<p> v(n, {0, 0});
  for (int i = 0; i < n; i++)
  {
    cin >> v[i].first;
    v[i].second = i;
  }
  sort(all(v));

  for(int i : v)
  {
    if(i < )
  }


}
