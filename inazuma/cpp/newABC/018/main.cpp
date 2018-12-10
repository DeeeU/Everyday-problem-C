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
  string s;
  int n;
  cin >> s >> n;
  vector<p> v(n, {0, 0});
  for(int i = 0; i < n; i++)
  {
    cin >> v[i].first >> v[i].second;
  }

  for(int i = 0; i < n; i++)
  {
    string tmp = s.substr(v[i].first-1, v[i].second - v[i].first + 1);
    reverse(all(tmp));
    s = s.substr(0, v[i].first-1) + tmp + s.substr(v[i].second);
  }
  cout << s << endl;
}
