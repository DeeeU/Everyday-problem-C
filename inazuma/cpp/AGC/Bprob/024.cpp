#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;

int main()
{
  int n;
  cin >> n;
  vector<p> v(n, {0, 0});
  for (int i = 0; i < n; i++){
  cin >> v[i].first;
  v[i].second = i;
  }

  sort(v.begin(), v.end());
  bool is0 = true;
  for (int i = 0; i < n; i++){
    if (v[i].second != i) {
      is0 = false;
    }
  }
  if (is0) {
    cout << 0 << endl;
    return 0;
  }
  int maxv = -1, count = 0;
  for (int i = 0; i < n - 1; i++){
    count++;
    if (v[i].second >= v[i+1].second) {
      maxv = max(maxv, count);
      count = 0;
    }
  }
  maxv = max(maxv, count);
  cout << n - maxv << endl;
  return 0;
}
