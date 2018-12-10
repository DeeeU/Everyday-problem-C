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
  ll n;
  cin >> n;
  ll power = 1;

  for (ll i = 1; i <= n; i++)
  {
    power *= i;
    power %= 1000000007;
  }
  cout << power << endl;

}
