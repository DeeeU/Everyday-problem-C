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
  int a, b, n;
  cin >> a >> b >> n;
  while(true) {
    if (n % a == 0 && n % b == 0) {
      cout << n << endl;
      return 0;
    }
    n++;
  }

  return 0;
}
