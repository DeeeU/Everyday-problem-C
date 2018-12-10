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
  int a,b,c,x;
  cin >> a >> b >> c >> x;
  x /= 50;
  int count = 0;
  for (int i = 0; i <= a; i++)
  {
    for (int j = 0; j <= b; j++)
    {
      for (int k = 0; k <= c; k++)
      {
        if ((10 * i + 2 * j + k) == x)
        {
          count++;
        }
      }
    }
  }
  cout << count << endl;
}
