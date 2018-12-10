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
  int a, b;
  cin >> a >> b;
  if (b % a == 0 )
  {
    cout << b / a << endl;
  }
  else
  {
    cout << b / a + 1 << endl;
  }
}
