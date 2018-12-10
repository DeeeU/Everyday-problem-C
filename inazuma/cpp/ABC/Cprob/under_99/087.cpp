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
  std::vector<int> v1;
  std::vector<int> v2;
  int tmp;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    v1.push_back(tmp);
  }
  for(int i = 0; i < n; i++){
    cin >> tmp;
    v2.push_back(tmp);
  }

  int maxv = 0;
  for(int i = 0; i < n; i++)
  {
    int sum = 0;
    for(int j = 0; j < n; j++){
      if (j <= i) {
        sum += v1[j];
      }
      if (j >= i) {
        sum += v2[j];
      }
    }
    if (sum > maxv) {
      maxv = sum;
    }
  }

  std::cout << maxv << '\n';

}
