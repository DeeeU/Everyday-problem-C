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
  vector<int> sum(n, 0);
  int tmp = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    tmp += v[i];
    sum[i] = tmp;
  }
  int res = INT_MAX;
  for (int i = 0; i < n-1; i++)
  {
    int hoge = sum[i];
    int huga = sum[n-1] - hoge;
    res = min(res, abs(hoge - huga));
  }

  cout << res << endl;
}
