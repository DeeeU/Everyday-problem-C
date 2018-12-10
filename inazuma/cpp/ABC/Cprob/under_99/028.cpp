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
  std::vector<int> v(5,0);
  for(int i = 0; i < 5; i++)
  {
    cin >> v[i];
  }
  std::vector<int> ans;
  // process

  int sum;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      for(int k = 0; k < 5; k++){
        if (i == j || i == k || j == k) {
          continue;
        }else{
          sum = (v[i] + v[j] + v[k]);
          ans.push_back(sum);
        }
      }
    }
  }
  set<int> s(ans.begin(), ans.end());
  vector<int> vec2(s.begin(), s.end());
  // for(int i : vec2){
  //   std::cout << i << '\n';
  // }

  // output
  std::cout << vec2[vec2.size()-3] << '\n';
}
