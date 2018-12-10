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
  int n,a,b;
  cin >> n >> a >> b;
  int res = 0;
  for (int i = 1; i <= n; i++){
    int tmp = i;
    int sum = 0;
    for (int j = 4; j >= 0; j--){
      sum += (tmp / int(pow(10, j)));
      tmp %= int(pow(10,j));
    }
    if (sum >= a && sum <= b) {
      res += i;
    }
  }
  cout << res << endl;
  return 0;
}
