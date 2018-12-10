#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <vector>
#include <string>
#include <set>
#include <sstream>
typedef long long ll;
using namespace std;

int main()
{
// input
  int x,k;
  //x : value, k : keta
  cin >> x >> k;
  ll tmp;
  if (k == 0) {
    std::cout << x+1 << '\n';
    exit(0);
  }
  x /= pow(10,k);
  tmp = (x+1)*pow(10,k);
  std::cout << tmp << '\n';
}
