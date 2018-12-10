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
  vector<int> v(n,0);
  int ave = 0;
  for (int i = 0; i < n; i++){
    cin >> v[i];
    ave += v[i];
  }
  if (ave % n != 0) {
    cout << -1 << endl;
    return 0;
  }

  ave /= n;


  int num = 0, count = 0;
  for (int i = 0; i < n; i++){
    if (v[i] != ave) {
      num += (v[i] - ave);
    }
    if (num != 0) {
      count++;
    }
  }
  cout << count << endl;

}
