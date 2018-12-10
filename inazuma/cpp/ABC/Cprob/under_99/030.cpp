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
  int aToNum, bToNum;
  ll aTobTime,bToaTime;
  cin >> aToNum >> bToNum >> aTobTime >> bToaTime;
  std::vector<int> va;
  std::vector<int> vb;
  int tmp;
  for (int i = 0; i < aToNum; i++)
  {
    cin >> tmp;
    va.push_back(tmp);
  }
  for (int i = 0; i < bToNum; i++)
  {
    cin >> tmp;
    vb.push_back(tmp);
  }
  int nt = 0;
  int result = 0;
  bool placeA = true;
  int lastTime = max(va[aToNum-1],vb[bToNum-1]);

  int ai = 0;
  int bi = 0;
  while (nt <= lastTime) {
    if (placeA) {
      for(;ai < aToNum; ai++){
        if (nt <= va[ai]) {
          nt = va[ai];
          nt += aTobTime;
          placeA = false;
          break;
        }
      }
      if (ai >= aToNum) goto LABEL;
    }
    else if(placeA == false)
    {
      for(;bi < bToNum; bi++){
        if (nt <= vb[bi]) {
          nt = vb[bi];
          nt += bToaTime;
          placeA = true;
          result++;
          break;
        }
      }
      if (bi >= bToNum) goto LABEL;
    }
  }
  LABEL:
  std::cout << result << '\n';
}
a
