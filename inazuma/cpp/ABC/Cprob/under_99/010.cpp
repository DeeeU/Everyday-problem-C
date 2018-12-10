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
  int txa, tya, txb, tyb, T, V;
  int n;
  cin >> txa >> tya >> txb >> tyb >> T >> V;
  cin >> n;
  vector<int> vx;
  vector<int> vy;

  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    vx.push_back(tmp);
    cin >> tmp;
    vy.push_back(tmp);
  }

  int maxD = V * T;

  for (int i = 0; i < n; i++)
  {
    int dxInRoute1 = vx[i]- txa;
    int dyInRoute1 = vy[i] - tya;
    double d1 = pow((dxInRoute1 * dxInRoute1 + dyInRoute1 * dyInRoute1),0.5);

    int dxInRoute2 = txb - vx[i];
    int dyInRoute2 = tyb - vy[i];
    double d2 = pow((dxInRoute2 * dxInRoute2 + dyInRoute2 * dyInRoute2),0.5);

    double sum = d1 + d2;

    if (maxD >= sum)
    {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;

}
