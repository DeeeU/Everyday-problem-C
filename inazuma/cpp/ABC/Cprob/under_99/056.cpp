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
  ll x;
  cin >> x;
  int i = 1;
  ll sum = 0;
  while (true) {
    sum += i;
    if (sum >= x) {
      std::cout << i << '\n';
      exit(0);
    }
    i++;
  }

}
