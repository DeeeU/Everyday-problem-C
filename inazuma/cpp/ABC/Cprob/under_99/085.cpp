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
  int n,Y;
  cin >> n >> Y;

  // process
  for(int x = 0;x < n+1; x++)
  {
    for(int y = 0; y < n+1-x; y++)
    {
      if (9 * x + 4 * y == (Y/1000) - n && x >= 0 && y >= 0 && (n - (x + y)) >= 0) {
        std::cout << x << ' ' << y << ' ' << n - x - y << '\n';
        exit(0);
      }
    }
  }

  std::cout << "-1 -1 -1" << '\n';
  // output
}
