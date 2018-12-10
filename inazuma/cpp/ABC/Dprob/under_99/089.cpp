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
  // pair<int, int>
  int h, w, d;
  cin >> h >> w >> d;
  vector<vector<int>> vv(h,vector<int>(w,0));
  vector<p> position(h * w + 1, p(0,0));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> vv[i][j];
      p p = make_pair(i,j);
      position[vv[i][j]] = p;
    }
  }
  // for (p i : position){
  //   cout << i.first << endl;
  //   cout << i.second << endl;
  // }

  int q;
  cin >> q;
  vector<int> l(q,0);
  vector<int> r(q,0);
  for (int i = 0; i < q; i++) {
    cin >> l[i] >> r[i];
  }

  vector<int> costFirst(h * w - d + 1, 0);// 1から
  for (int i = 1; i < h * w - d + 1; i++) {
    costFirst[i] = abs(position[i].first - position[i+d].first) + abs(position[i].second - position[i+d].second);
  }


  vector<int> costSecond(h*w, 0);

  for (int i = h * w - d - 1; i >= 0; i--){
    costSecond[i] = costSecond[i+d] + costFirst[i+1];
  }


  for (int i = 0; i < q; i++){
    cout << costSecond[l[i] - 1] - costSecond[r[i] - 1] << endl;
  }

}
