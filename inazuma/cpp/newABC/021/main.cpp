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
  int n, a, b, k;
  cin >> n >> a >> b >> k;
  vector<int> v(k, 0);
  for(int i = 0; i < k; i++)
  {
    cin >> v[i];
    for(int j = 0; j < k; j++)
    {
      if((i != j) && (v[i] == v[j] || v[i] == a || v[i] == b))
      {
        cout << "NO" << endl;
        return 0;
      }
    }
  }
  cout << "YES" << endl;
}
