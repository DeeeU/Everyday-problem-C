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
  vector<ll> tmp(n,0);
  tmp = v;
  sort(tmp.begin(), tmp.end());
  ll center1 = tmp[n/2 - 1];
  ll center2 = tmp[n/2];
  // cout << center1 << endl;
  // cout << center2 << endl;

  for(ll i : v){
    if (i <= center1) {
      cout << center2 << endl;
    }else if (i >= center2){
      cout << center1 << endl;
    }
  }

  return 0;
}
