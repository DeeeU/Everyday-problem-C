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
  int begin, end;
  for (int i = 0; i < int(s.size()); i++)
  {
    if (s[i] == 'A')
    {
      begin = i;
      break;
    }
  }
  for (int i = begin; i < int(s.size()); i++)
  {
    if (s[i] == 'Z')
    {
      end = i;
    }
  }
  cout << end - begin + 1 << endl;
}
