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
  int n,k;
  cin >> n >> k;
  std::map<int, int> map;
  int tmp;
  for(int i = 0; i < n; i++)
  {
    cin >> tmp;
    map[tmp]++;
  }

  // process
  std::vector<int> v;
  for (auto a : map) {
    v.push_back(a.second);
  }
  sort(v.begin(),v.end());
  int result = 0;
  for(int i = 0; i < (int)v.size() - k; i++)
  {
    result += v[i];
  }

  // output
  std::cout << result << '\n';
}
