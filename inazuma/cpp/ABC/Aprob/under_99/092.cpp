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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int res = 0;
  cout << min(a, b) + min(c, d) << endl;
  return 0;
}
