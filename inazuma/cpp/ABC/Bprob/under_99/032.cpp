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
  // int result = 0;
  string s; int n;
  cin >> s >> n;
  std::vector<string> v;
  // process
  if (s.size() < n) {
    std::cout << "0" << '\n';
  }
  else
  {
    for(int i = 0; i < s.size()+1-n; i++)
    {
      v.push_back(s.substr(i,n));
    }
    set<string> x(v.begin(), v.end());

    //output
    std::cout << x.size() << '\n';
    return 0;

  }
}
