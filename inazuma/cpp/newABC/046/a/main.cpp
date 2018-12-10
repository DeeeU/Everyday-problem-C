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
  vector<int> v(3,0);
  cin >> v[0] >> v[1] >> v[2];
  set<int> s(all(v));
  cout << s.size() << endl;
}
