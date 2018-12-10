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
  string tmp;
  map<string, int> a;
  map<string, int> b;
  for (int i = 0; i < n; i++){
    cin >> tmp;
    a[tmp]++;
  }

  int m;
  cin >> m;
  for (int i = 0; i < m; i++){
    cin >> tmp;
    a[tmp]--;
  }
  int res = 0;
  for(auto i : a){
     res = max(res,i.second);
   }
  cout << res << endl;



  return 0;
}
