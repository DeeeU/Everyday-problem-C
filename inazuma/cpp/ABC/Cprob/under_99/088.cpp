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
  int tmp;
  std::vector<int> v1;
  std::vector<int> v3;
  std::vector<int> v2;
  for(int i = 0; i < 3; i++)
  {
    cin >> tmp;
    v1.push_back(tmp);
  }
  for(int i = 0; i < 3; i++)
  {
    cin >> tmp;
    v2.push_back(tmp);
  }
  for(int i = 0; i < 3; i++)
  {
    cin >> tmp;
    v3.push_back(tmp);
  }


  // int a0,a1,a2,b0,b1,b2;

  // process
  std::vector<int> as;
  std::vector<int> bs;
  // a0 = 0;
  // b0 = v1[0];
  // b1 = v1[1];
  // b2 = v1[2];
  // a1 = v2[0] - b0;
  // a2 = v3[0] - b0;
  as.push_back(0);
  bs.push_back(v1[0]);
  bs.push_back(v1[1]);
  bs.push_back(v1[2]);
  as.push_back(v2[0] - v1[0]);
  as.push_back(v3[0] - v1[0]);
  for(int i = 0; i < 3; i++)
  {
    // std::cout << as[i] << '\n';
    // std::cout << bs[i] << '\n';
  }

  // bool allOK = true;
  for (int i = 0; i < 3; i++){
    if (as[0] + bs[i] != v1[i] || as[1] + bs[i] != v2[i] || as[2] + bs[i] != v3[i]) {
      std::cout << "No" << '\n';
      exit(0);
    }
  }

  // output
  std::cout << "Yes" << '\n';
}
