#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;

int main()
{
  int n;
  cin >> n;
  vector<ll> v(n, 0);
  for (int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  cout << v[n-1] << ' ';
  // v.erase(v.begin() + n - 1);
  // for(ll i : v)
  //   cout << i << endl;

  ll minv = INT_MAX;
  int tmp;
  for (int i = 0; i < n-1; i++){
    // cout << abs((v[n-1]+1)/2 - v[i]) << endl;
    if (abs((v[n-1]+1)/2 - v[i]) <= minv) {
      minv = abs((v[n-1]+1)/2 - v[i]);
      tmp = i;
    }
  }
  cout << v[tmp] << endl;
  return 0;
}
