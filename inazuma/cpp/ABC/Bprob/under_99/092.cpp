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
  int n,d, x;
  cin >> n >> d >> x;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++){
    cin >> v[i];
  }
  int res = x;
  for (int i = 0; i < n; i++){
    int day = 1;
    while(day <= d) {
      res++;
      // cout << day << endl;
      day += v[i];
    }
  }
  cout << res << endl;
  return 0;
}
