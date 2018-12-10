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
  int minv,maxv;
  int week;
  cin >> minv >> maxv >> week;
  int tmp;
  for(int i = 0; i < week; i++)
  {
    cin >> tmp;
    if (tmp < minv) {
      std::cout << minv - tmp << '\n';
    }
    else if (tmp > maxv) {
      std::cout << "-1" << '\n';
    }
    else{
      std::cout << "0" << '\n';
    }
  }
}
