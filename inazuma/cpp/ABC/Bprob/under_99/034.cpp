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
  // input & pre
  ll n;
  cin >> n;
  // process


  //output
  if (n % 2 == 0) {
    std::cout << n - 1 << '\n';
  }
  else
  {
    std::cout << n + 1 << '\n';
  }
}
