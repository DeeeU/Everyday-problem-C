#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> v(n,0);
  for (int i = 0; i < n; i++){
    cin >> v[i];
  }
  int res = 0;
  for (int i = 0; i < n; i++){
    int tmp = abs(v[i] - k);
    res += 2*min(tmp, v[i]);
  }
  cout << res << endl;
  return 0;
}
