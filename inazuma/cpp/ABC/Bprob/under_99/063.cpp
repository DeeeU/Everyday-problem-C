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
  string s;
  cin >> s;
  for (int i = 0; i < int(s.size()); i++)
  {
    for (int j = i+1; j < int(s.size()); j++)
    {
      if (s[i] == s[j])
      {
        cout << "no" << endl;
        return 0;
      }
    }
  }

  cout << "yes" << endl;
}
