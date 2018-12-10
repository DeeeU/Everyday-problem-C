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
  string s;
  cin >> s;
  vector<char> v;
  // vector<int> count;
  for (int i = 0; i < int(s.size()); i++)
  {
    v.push_back(s[i]);
  }

  for (int i = 0; i < int(v.size()); i++)
  {
    int count = 0;
    for (int j = 0; j < int(v.size()); j++)
    {
      if (s[i] == s[j])
      {
        count++;
      }
    }
    if (count % 2 == 1)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

}
