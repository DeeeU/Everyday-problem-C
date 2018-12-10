#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<p> v(n, {0,0});
  for (int i = 0; i < n; i++){
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());

  for(p i : v)
    cout << i.first << " : " << i.second << endl;

  for (int i = 0; i < n; i++){
    k -= v[i].second;
    if (k <= 0) {
      cout << v[i].first << endl;
      return 0;
    }
  }
  return 0;
}
