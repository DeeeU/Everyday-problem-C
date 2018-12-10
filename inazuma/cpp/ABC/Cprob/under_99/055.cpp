#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <climits>
#include <map>
typedef long long ll;
using namespace std;

typedef pair<int,int> p;

int main()
{
  // input & declare
  ll s,c;
  ll result;
  cin >> s >> c;
  if (s >= c/2) {
    result = c / 2;
  }
  else
  {
    result = s;
    c -= s * 2;
    result += c / 4;
  }
  std::cout << result << '\n';
}
