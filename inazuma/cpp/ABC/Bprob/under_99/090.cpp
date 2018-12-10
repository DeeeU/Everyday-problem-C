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
  int a,b;
  cin >> a >> b;
  int res = 0;
  for (int i = a; i <= b; i++){
    string tmp = to_string(i);
    if (tmp[0] == tmp[4] && tmp[1] == tmp[3]) {
      res++;
    }
  }

  cout << res << endl;


}
