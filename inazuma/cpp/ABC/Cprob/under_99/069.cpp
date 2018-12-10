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
  vector<ll> v(n,0);
  int countA = 0;
  int countB = 0;
  int countC = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if (v[i] % 4 == 0){
      countA++;
    }else if (v[i] % 2 == 0){
      countB++;
    }else{
      countC++;
    }
  }

  if (countB >= 1)
  {
    countC++;
  }

  if (countC <= countA + 1)
  {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
