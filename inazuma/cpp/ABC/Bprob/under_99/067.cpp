#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main(void)
{
  int n, k;
  cin >> n >> k;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int res = 0;
  for (int i = n-1; i > n-1-k; i--){
    res += v[i];
  }
  cout << res << endl;
  return 0;
}
