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
  ll t;
  cin >> t;
  vector<ll> a(t, 0);
  vector<ll> b(t, 0);
  vector<ll> c(t, 0);
  vector<ll> d(t, 0);
  for (int i = 0; i < t; i++)
  {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }

  for (int i = 0; i < t; i++)
  {
    if(a[i] < b[i]){
      cout << "No" << endl;
      continue;
    }
    if(b[i] > d[i]) {
      cout << "No" << endl;
      continue;
    }
    if(a[i] % b[i] > c[i]){
      cout << "No" << endl;
      continue;
    }
    if(b[i] == d[i]){
      cout << "Yes" << endl;
      continue;
    }
    bool flag = true;
    for (int j = a[i] % b[i]; j >= 0; j -= abs(b[i] - c[i]))
    {
      ll tmp = ((c[i] - j) / (d[i]-b[i]) + 1) * (d[i] - b[i]);
      // cout << tmp << endl;
      if(tmp + j < b[i]){
        flag = false;
        break;
      }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
