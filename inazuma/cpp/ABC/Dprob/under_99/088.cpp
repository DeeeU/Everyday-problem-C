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
  int h,w;
  int count = 0;
  int dx[4] = {1,0,-1,0};
  int dy[4] = {0,1,0,-1};
  cin >> h >> w;
  std::vector<string> maze;
  int d[h][w];
  string s;
  for(int i = 0; i < h; i++){
    cin >> s;
    maze.push_back(s);
  }
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      d[i][j] = INT_MAX;
      // if (maze[i][j] = '#') {
      //   d[i][j] = -1;
      // }
    }
  }
  std::vector<p> shortest;

  queue<p> q;
  q.push(p(0,0));
  d[0][0] = 0;
  // process
  while (q.size() != 0) {
    p ptmp = q.front();
    q.pop();
    for(int i = 0; i < 4; i++)
    {
      int ny = ptmp.first + dy[i];
      int nx = ptmp.second + dx[i];
      if (ny >= 0 && ny < h && nx >= 0 && nx < w && d[ny][nx] == INT_MAX && maze[ny][nx] == '.') {
        d[ny][nx] = d[ptmp.first][ptmp.second] + 1;
        q.push(p(ny,nx));
       }
       if (ptmp.first == h-1 && ptmp.second == w-1) break;
    }
  }

  if (d[h-1][w-1] == INT_MAX) {
    std::cout << "-1" << '\n';
    exit(0);
  }
  count = (h * w) - 1 - d[h-1][w-1];
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if (maze[i][j] == '#') {
        count--;
      }
    }
  }
  // output
  // std::cout << d[h-1][w-1] << '\n';
  std::cout << count << '\n';
}
