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

int main()
{
  int n;
  cin >> n;
  vector<char> v(n,0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  set<int> s(v.begin(), v.end());
  if (int(s.size()) == 3)
  {
    cout << "Three" << endl;
  }else if (int(s.size()) == 4)
  {
    cout << "Four" << endl;
  }
}
