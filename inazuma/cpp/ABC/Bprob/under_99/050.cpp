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
  vector<int> times(n,0);
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> times[i];
    sum += times[i];
  }
  int m;
  cin >> m;
  int tmp;
  vector<vector<int>> vv(m,vector<int>());
  for (int i = 0; i < m; i++)
  {
    cin >> tmp;
    vv[i].push_back(tmp);
    cin >> tmp;
    vv[i].push_back(tmp);
  }

  for (vector<int> i : vv)
  {
    cout << sum - times[(i[0]-1)] + i[1]  << endl;
  }
}
