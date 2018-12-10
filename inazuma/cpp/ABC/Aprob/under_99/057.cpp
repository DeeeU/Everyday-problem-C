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
  int a, b;
  cin >> a >> b;
  if ((a + b) < 24)
  {
    cout << a + b << endl;
  }else{
    cout << (a + b)-24 << endl;
  }

}
