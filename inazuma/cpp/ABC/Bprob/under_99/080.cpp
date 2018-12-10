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
  int sum = 0;
  int tmp = n;
  // cout << int(log10(n)) << endl;
  for (int i = int(log10(n)); i >= 0 ; i--)
  {
    int x = pow(10,i);
    sum += (tmp / x);
    tmp %= x;
  }
  if (n % sum == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
