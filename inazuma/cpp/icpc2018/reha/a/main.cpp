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
  while(true)
  {
    int n;
    cin >> n;
    if(n == 0) return 0;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    sort(all(v));
    cout << v[n-1] << endl;
  }

}
