#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;

int main()
{
  while(true){
    ll n, m;
    ll res = 0;
    cin >> n >> m;
    vector<ll> v(n, 0);
    if (n == 0 && m == 0) {
      return 0;
    }
    for (int i = 0; i < n; i++){
      cin >> v[i];
    }

    for (int i = 0; i < n; i++){
      for (int j = i+1; j < n; j++){
        if (v[i] + v[j] <= m && res <= v[i] + v[j]) {
          res = v[i] + v[j];
        }
      }
    }
    if (res == 0) {
      cout << "NONE" << endl;
    }else{
      cout << res << endl;
    }
  }
}
