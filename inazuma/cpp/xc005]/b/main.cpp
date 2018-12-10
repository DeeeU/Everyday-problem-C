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
  int k, t;
  cin >> k >> t;
  vector<int> v(t, 0);
  for (int i = 0; i < t; i++)
  {
    cin >> v[i];
  }

  sort(all(v));

  int maxv = v[t-1];
  int sum = 0;
  for (int i = 0; i < t-1; i++)
  {
    sum += v[i];
  }

  int res = 0;

  if(maxv > sum+1) res = maxv - sum -1;

  cout << res << endl;



}
