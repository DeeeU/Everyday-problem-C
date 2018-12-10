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
  int l, n;
  cin >> l >> n;
  string v[1000];
  for(int i = 0; i < n; i++) cin >> v[i];
  sort(v, v+n);
  for(int i = 0; i < n; i++) cout << v[i];
  cout << endl;
}
