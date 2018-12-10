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
  int res = 0;
  for (int i = 1; i <= n; i += 2)
  {
    int count = 0;
    for (int j = 1; j <= n; j++)
    {
      count += (i % j == 0);
    }
    if(count == 8) res++;
  }
  cout << res << endl;
}
