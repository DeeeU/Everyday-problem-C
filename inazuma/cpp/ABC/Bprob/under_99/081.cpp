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
  int n;
  cin >> n;
  vector<int> v;
  int tmp;
  for (int i = 0; i < n; i++)
  {
    cin >> tmp;
    v.push_back(tmp);
  }
  int res = 0;

  while (true)
  {
    // cout << res << endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (v[i] % 2 == 0)
      {
        count++;
      }
    }
    if (count == n)
    {
      for (int i = 0; i < n; i++)
      {
        v[i] /= 2;
        // cout << v[i] << endl;
      }
    }
    if (count != n)
    {
      cout << res << endl;
      return 0;
    }
    res++;
  }
}
