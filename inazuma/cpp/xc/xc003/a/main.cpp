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
  int a, b, n;
  cin >> a >> b >> n;
  for (int i = n; i < INT_MAX; i++)
  {
    if (i % a == 0 && i % b == 0)
    {
      cout << i << endl;
      return 0;
    }
  }

}
