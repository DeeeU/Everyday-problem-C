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
  // input & declare
  int n,tmp;
  cin >> n;
  std::vector<int> v;
  for(int i = 0; i < n; i++)
  {
    cin >> tmp;
    v.push_back(tmp);
  }
  set<int> s(v.begin(), v.end());
  std::cout << s.size() << '\n';
  // process


  // output

}
