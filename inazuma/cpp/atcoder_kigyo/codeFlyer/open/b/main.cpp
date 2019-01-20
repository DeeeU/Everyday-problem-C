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
  int n, q;
  cin >> n >> q;
  vector<int> x(n, 0);
  vector<int> c(q, 0);
  vector<int> d(q, 0);

  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }

  for (int i = 0; i < q; i++)
  {
    cin >> c[i] >> d[i];
  }

  for (int i = 0; i < q; i++)
  {
    int low = 0;
    int high = n-1;
    int ave = (low + high) / 2;
    while(high - low > 1)
    {
      if(ave)
    }
  }


}
