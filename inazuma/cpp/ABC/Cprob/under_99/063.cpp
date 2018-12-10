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
  for(int i = 0; i < n; i++)
  {
    cin >> tmp;
    v.push_back(tmp);
  }
  sort(v.begin(),v.end());

  // process
  bool all = true;
  for(int i : v){
    if (i % 10 != 0) {
      all = false;
    }
  }
  if (all) {
    std::cout << "0" << '\n';
    exit(0);
  }


  int i = 0;
  while (true) {
    int sum = accumulate(v.begin(),v.end(),0);
    if (sum % 10 == 0) {
    sum = accumulate(v.begin(),v.end(),-v[i]);
    }
    if(sum % 10 != 0){
      std::cout << sum << '\n';
      exit(0);
    }
    i++;
  }

  // output

}
