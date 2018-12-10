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
  // input & declare
  int n,tmp;
  cin >> n;
  std::vector<int> v;
  double sum = 0;
  int ave1 = 0;
  int ave2 = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> tmp;
    v.push_back(tmp);
    sum += tmp;
  }


  ave1 = ceil(sum / n);
  ave2 = floor(sum / n);


  // ave = ceil(sum / n);
  // std::cout << ave << '\n';

  int ans1 = 0;
  int ans2 = 0;

  // process
  for(int i = 0; i < n; i++)
  {
    ans1 += pow((ave1 - v[i]),2);
    ans2 += pow((ave2 - v[i]),2);
  }

  // output
  std::cout << min(ans1,ans2) << '\n';
}
