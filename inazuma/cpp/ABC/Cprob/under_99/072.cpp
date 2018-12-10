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
  int result = 0;
  int n,tmp;
  cin >> n;
  std::vector<int> v;
  for(int i = 0;i < n; i++)
  {
    cin >> tmp;
    v.push_back(tmp);
  }
  set<int> s(v.begin(), v.end());
  auto sample = s.begin();
  int maxv = 0;

  // process
  for(int i = 0; i < s.size(); i++)
  {
    for(int j = 0; j < n; j++)
    {
      if (v[j] == *sample+1 || v[j] == *sample-1 || v[j] == *sample) {
        result++;
      }
    }
    if (maxv <= result) {
      maxv = result;
    }
    result = 0;
    sample++;
  }

  //output
  std::cout << maxv << '\n';
}
