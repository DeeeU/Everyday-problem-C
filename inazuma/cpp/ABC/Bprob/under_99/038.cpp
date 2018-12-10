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
  // input & declare
  string result = "NO";
  std::vector<int> v1(2,0);
  std::vector<int> v2(2,0);
  cin >> v1[0] >> v1[1] >> v2[0] >> v2[1];

  // process
  for(int i = 0; i < 2; i++)
  {
    for(int j = 0; j < 2; j++)
    {
      if (v1[i] == v2[j]) {
        result = "YES";
      }
    }
  }

  //output
  std::cout << result << '\n';
}
