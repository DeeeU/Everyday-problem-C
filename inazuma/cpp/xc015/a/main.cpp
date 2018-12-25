#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int main(){
  int n;
  cin >> n;
  vector<int> d(n, 0);
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> d[i];
    mp[d[i]]++;
  }
  int m;
  cin >> m;
  vector<int> t(m, 0);
  bool flag = true;
  for (int i = 0; i < m; i++)
  {
    cin >> t[i];
    if(mp[t[i]] > 0) mp[t[i]]--;
    else flag = false;
  }

  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;



}
