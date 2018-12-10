#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <vector>
#include <string>
#include <set>
typedef long long ll;
using namespace std;

int n , k;

bool dfs(int num,int val,vector<vector<int>> vv){
  if (num == n && val == 0) {
      std::cout << "Found" << '\n';
      exit(0);
  }
  for(int i = 0; i < k; i++)
  {
    if(num != n) dfs(num+1,val^vv[num][i],vv);
  }
  return false;
}

int main()
{
  // input & declare
  cin >> n >> k;
  int result = 0;
  int tmp;
  std::vector<vector<int>> vv(n,vector<int>(k,0));
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < k; j++)
    {
      cin >> vv[i][j];
    }
  }

  // process
if (dfs(0,0,vv) == 0) {
  cout << "Nothing" << endl;
}


  //output

}
