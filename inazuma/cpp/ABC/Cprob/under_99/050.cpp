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


  // process
  ll result = 0;
  for(int i = 1; i < n; i += 2){
    // std::cout << i << '\n';
    if (n % 2 == 0) {
      if (v[i-1] == v[i] && v[i] == i) {
        result++;
      }else{
        std::cout << "0" << '\n';
        exit(0);
      }
    }
    else if(n % 2 == 1){
      if (i == 1){
        v.erase(v.begin());
      }
      if (v[i-1] == v[i] && v[i] == i+1) {
        result++;
      }else{
        std::cout << "0" << '\n';
        exit(0);
      }
    }
  }

  int ans = 1;
  for(int i = 0; i < result; i++){
    ans *= 2;
    if (ans > 1000000007) {
      ans %= 1000000007;
    }
  }

  // output
  std::cout << ans << '\n';
}
