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
  double a,b,c,d;
  cin >> a >> b >> c >> d;
  if (b / a == d / c) {
    std::cout << "DRAW" << '\n';
  }else if (b / a > d / c) {
    std::cout << "TAKAHASHI" << '\n';
  }else{
    std::cout << "AOKI" << '\n';
  }
}
