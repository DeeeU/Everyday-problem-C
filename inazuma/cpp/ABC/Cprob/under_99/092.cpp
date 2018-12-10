using namespace std;

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <climits>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <numeric>
typedef long long ll;
typedef pair<int,int> p;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n+2, 0);
  for (int i = 1; i <= n; i++){
    cin >> v[i];
  }
  int ans = 0;
  for (int i = 1; i <= n + 1; i++){
    ans += abs(v[i] - v[i-1]);
  }
  // ans += abs(v[n-1]);
  // cout << ans << endl;

  for (int i = 1; i <= n; i++){
    // int res = ans;
    cout << ans - abs(v[i-1] - v[i]) - abs(v[i] - v[i+1]) + abs(v[i-1] - v[i+1]) << endl;
  }

  return 0;
}
