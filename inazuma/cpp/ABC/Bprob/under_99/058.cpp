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
  string s1,s2;
  cin >> s1 >> s2;
  for (int i = 0; i < int(s1.size()); i++)
  {
    if (int(s1.size()) == int(s2.size())+1 && i == int(s1.size()) - 1)
    {
      cout << s1[i] << endl;
      return 0;
    }
    cout << s1[i] << s2[i];
  }
  cout << endl;
}
