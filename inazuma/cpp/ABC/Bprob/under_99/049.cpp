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
  int h, w;
  cin >> h >> w;
  vector<string> v;
  string tmp;
  for (int i = 0; i < h; i++)
  {
    cin >> tmp;
    v.push_back(tmp);
  }
  
  for (int i = 0; i < h; i++)
  {
    cout << v[i] << endl;
    cout << v[i] << endl;
  }
}
