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
  int a, d;
  cin >> a >> d;
  if (a <= d)
  {
    a++;
  }
  else{
    d++;
  }
  cout << a * d << endl;
}
