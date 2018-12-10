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

#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)




int main()
{
  // input & declare
  int n,tmp;
  cin >> n;
  vector<vector<int>> vv(n,std::vector<int>());
  for (int i = 0; i < n; i++)
  {
    cin >> tmp;
    vv[i].push_back(tmp);
    cin >> tmp;
    vv[i].push_back(tmp);
    cin >> tmp;
    vv[i].push_back(tmp);
  }

  // process
  int nTime = vv[0][0];
  int nx = vv[0][1];
  int ny = vv[0][2];

  for (int i = 0; i < n; i++)
  {
    // std::cout << nTime << '\n';
    // std::cout << nx << '\n';
    // std::cout << ny << '\n';

    if (nTime < nx + ny || (nTime - (nx + ny)) % 2 == 1) {
      std::cout << "No" << '\n';
      exit(0);
    }
    if (i != n-1) {
      nTime = abs(vv[i+1][0] - vv[i][0]);
      nx = abs(vv[i+1][1] - vv[i][1]);
      ny = abs(vv[i+1][2] - vv[i][2]);
    }
  }
  std::cout << "Yes" << '\n';

}
