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
  ll n;
  cin >> n;
  ll tmp = n;
  ll gomi = pow(10,int(log10(tmp)));
  ll tmp2 = (tmp % gomi);
  bool paternA = true;

  int exceptionResult = 0;
  if (n % 10 == 0)
  {
    for (int i = 0; i < log10(n); i++)
    {
      exceptionResult += 9;
    }
    cout << exceptionResult << endl;
    return 0;
  }

  for (int i = 0; i <= int(log10(tmp2)); i++)
  {
    ll x = pow(10,i);
    if ((tmp2 / x) != 9)
    {
      paternA = false;
      break;
    }
    tmp2 %= x;
  }

  ll result = tmp / gomi;
  for (int i = 0; i < int(log10(n)); i++)
  {
    result += 9;
  }
  if (paternA == false)
  {
    result--;
  }

  cout << result << endl;
}
