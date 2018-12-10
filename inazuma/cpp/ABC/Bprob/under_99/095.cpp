#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n, x;
  cin >> n >> x;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  int res = 0;
  for (int i = 0; i < n; i++){
    if (x < v[i]) {
      cout << res << endl;
      return 0;
    }
    x -= v[i];
    res++;
  }

  res += x / v[0];
  cout << res << endl;

  return 0;
}
