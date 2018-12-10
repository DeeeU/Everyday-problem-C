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
  int n;
  cin >> n;
  std::vector<int> v;
  int tmp;
  for(int i = 0; i < n; i++)
  {
    cin >> tmp;
    v.push_back(tmp);
  }
  sort(v.begin(),v.end());
  int ans = 0;
  for(int i = n-1; i >= 0; i-=2){
    ans += v[i];
    ans -= v[i-1];
  }

  std::cout << ans << '\n';
  // process


  // output

}
