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
  ll n,m;
  cin >> n >> m;
  ll s = n*m;
  ll tmp = n*2 + m*2 - 4;
  cout << abs(s - tmp) << endl;
}
