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
  if (n <= 59)
  {
    cout << "Bad" << endl;
  }else if (n <= 89)
  {
    cout << "Good" << endl;
  }else if (n <= 99)
  {
    cout << "Great" << endl;
  }else{
    cout << "Perfect" << endl;
  }

}
