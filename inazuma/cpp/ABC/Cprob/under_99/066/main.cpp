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
  #define int long long
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  if (n % 2 == 1)
  {
    for(int i = n-1; i >= 0; i -= 2) cout << v[i] << " ";
    for(int i = 1; i <= n-2; i += 2) cout << v[i] << " ";
    cout << endl;
  }
  if (n % 2 == 0)
  {
    for(int i = n-1; i >= 1; i -= 2) cout << v[i] << " ";
    for(int i = 0; i <= n-2; i += 2) cout << v[i] << " ";
    cout << endl;
  }

}
