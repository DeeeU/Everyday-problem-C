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
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 == s2)
  {
    cout << "EQUAL" << endl;
  }
  else if (int(s1.size()) > int(s2.size()))
  {
    cout << "GREATER" << endl;
  }
  else if (int(s1.size()) < int(s2.size()))
  {
    cout << "LESS" << endl;
  }
  else
  {
    int i = 0;
    while (true)
    {
      // cout << "s1: " << s1[i] << endl;
      // cout << "s2: " << s2[i] << endl;
      if (s1[i] > s2[i])
      {
        cout << "GREATER" << endl;
        return 0;
      }
      else if (s1[i] < s2[i])
      {
        cout << "LESS" << endl;
        return 0;
      }
      i++;
    }
  }
}
