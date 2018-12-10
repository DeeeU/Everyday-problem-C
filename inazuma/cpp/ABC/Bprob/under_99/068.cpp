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
  int n;
  cin >> n;
  int maxv = 0;
  int maxv2 = 1;

  for (int i = 2; i <= n; i++)
  {
    int count = 0;
    int tmp = i;
    while(tmp % 2 == 0){
      tmp /= 2;
      count++;
    }
    if (count >= maxv)
    {
      maxv2 = i;
      maxv = count;
    }
  }

  cout << maxv2 << endl;
}
