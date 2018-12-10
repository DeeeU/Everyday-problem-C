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
  int n, h;
  cin >> n >> h;
  std::vector<int> va;
  std::vector<int> vb;
  int tmp;
  for(int i = 0; i < n; i++)
  {
    cin >> tmp;
    va.push_back(tmp);
    cin >> tmp;
    vb.push_back(tmp);
  }

  sort(va.begin(),va.end());
  sort(vb.begin(),vb.end());

  int maxa = va[n-1];

  int maxa_index = n;
  for(int i = 0; i < n; i++){
    if (vb[i] > maxa) {
      maxa_index = i;
      break;
    }
  }

  // process
  int result = 0;
  for(int i = n-1; i >= maxa_index; i--)
  {
    h -= vb[i];
    result++;
    if (h <= 0) {
      std::cout << result << '\n';
      exit(0);
    }
  }

  while (true) {
    if (h <= 0) {
      std::cout << result << '\n';
      exit(0);
    }
    h -= maxa;
    result++;
    if (h <= 0) {
      std::cout << result << '\n';
      exit(0);
    }
  }
}
