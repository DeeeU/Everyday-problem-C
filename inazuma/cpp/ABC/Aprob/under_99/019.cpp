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
  vector<int> v(3,0);
  for (int i = 0; i < 3; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  cout << v[1] << endl;


}
