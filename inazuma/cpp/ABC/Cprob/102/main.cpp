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
  vector<int> tmp(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    v[i] -= (i+1);
  }

  sort(all(v));

  // for(int i : tmp) cout << i << endl;
  int median = v[n/2];
  // if(n % 2 == 0) median = (tmp[n/2] + tmp[n/2 - 1]) / 2;
  // cout << median << endl;

  ll res = 0;
  for (int i = 0; i < n; i++)
  {
    res += abs(v[i] - median);
  }

  cout << res << endl;
}
