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

#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)

typedef long long ll;
typedef pair<int,int> p;



int main()
{
  // input & declare
  int a, b;
  cin >> a >> b;
  int result = 0;
  while (a % b != 0) {
    a++;
    result++;
  }

  std::cout << result << '\n';
}
