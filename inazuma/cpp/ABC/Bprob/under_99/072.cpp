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
  string s;
  cin >> s;
  if (s.size() % 2 == 1) {
    for(int i = 0; i < int(s.size()); i += 2){
      std::cout << s[i];
    }
  }
  else
  {
    for(int i = 0; i < int(s.size())-1; i += 2){
      std::cout << s[i];
    }

  }
  std::cout << '\n';
}
