#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <vector>
#include <string>
#include <set>
typedef long long ll;
using namespace std;

int main()
{
  // input & prepare
  double result = 0;
  double n,m;
  cin >> n >> m;

  // process
  if (n > 12) {
    n -= 12;
  }
  n *= 5;
  n += (m / 12);

  if (abs(n-m) > 60-abs(n-m)) {
    result = 60-abs(n-m);
  }
  else
  {
    result = abs(n-m);
  }
  result *= 6;

  //output
  std::cout << result << '\n';
}
