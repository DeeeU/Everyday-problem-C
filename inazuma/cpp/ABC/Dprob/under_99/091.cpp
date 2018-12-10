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
  vector<p> red(n,{0,0});
  vector<p> blue(n,{0,0});
  int tmp1,tmp2;
  for (int i = 0; i < n; i++){
    cin >> tmp1 >> tmp2;
    p tmp = make_pair(tmp1, tmp2);
    red[i] = tmp;
  }
  for (int i = 0; i < n; i++){
    cin >> tmp1 >> tmp2;
    p tmp = make_pair(tmp1, tmp2);
    blue[i] = tmp;
  }


  return 0;
}
