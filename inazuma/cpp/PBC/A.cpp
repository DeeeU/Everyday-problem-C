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
  string s;
  cin >> s;
  int sum = 0;
  for(int i = 0; i < 6; i++)
  {
    if (s[i] == '1') {
      sum++;
    }
  }
  std::cout << sum << '\n';

}
