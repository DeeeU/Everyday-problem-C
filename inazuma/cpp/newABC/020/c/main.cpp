#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<ll, ll> p;
ll h, w, t;

struct Node {
  vector<p> to;
  vector<ll> cost;
  bool done = false;
  ll minCost = INT_MAX;
};

// void printNode(vector<Node> v){
//   int nodeNum = int(v.size());
//   cout << "Node vector" << endl;
//   for (int i = 0; i < nodeNum; i++) {
//     print(v[i].to);
//     print(v[i].cost);
//     cout << v[i].done << endl;
//     cout << v[i].minCost << endl;
//     cout << "======" << endl;
//   }
// }

int djikstra(vector<vector<Node>> v, int startY, int startX, int goalY, int goalX){
  v[startY][startX].minCost = 0;
  int ny = startY;
  int nx = startX;
  while(true) {
    // printNode(v);
    v[ny][nx].done = true;
    int edgeNum = int(v[ny][nx].to.size());
    for (int i = 0; i < edgeNum; i++) {
      int nextNodeIndexY = v[ny][nx].to[i].first;
      int nextNodeIndexX = v[ny][nx].to[i].second;
      v[nextNodeIndexY][nextNodeIndexX].minCost =
        min(v[nextNodeIndexY][nextNodeIndexX].minCost, v[ny][nx].minCost + v[ny][nx].cost[i]);
    }

    int minNodeIndexY = -1;
    int minNodeIndexX = -1;
    ll minNodeCost = LLONG_MAX;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        // cout << v[i][j].minCost << endl;
        if(minNodeCost > v[i][j].minCost && !v[i][j].done){
          minNodeIndexY = i;
          minNodeIndexX = j;
          minNodeCost = v[i][j].minCost;
        }
      }
    }
    ny = minNodeIndexY;
    nx = minNodeIndexX;
    // cout << ny << " : " << nx << endl;
    if(ny == goalY && nx == goalX) return v[ny][nx].minCost;
  }
}

int main(){
  cin >> h >> w >> t;
  vector<string> v(h);
  int startY = -1, startX = -1, goalY = -1, goalX = -1;
  for (int i = 0; i < h; i++)
  {
    cin >> v[i];
    for (int j = 0; j < w; j++) {
      if(v[i][j] == 'S'){
        startY = i;
        startX = j;
      }else if(v[i][j] == 'G'){
        goalY = i;
        goalX = j;
      }
    }
  }

  int dx[] = {1, 0};
  int dy[] = {0, 1};

  ll res = -1;
  ll left = 0;
  ll right = pow(10, 9) + 10;
  ll ave = (left + right) / 2;
  ll beforeAve = ave;
  while(right - left > 1){
    vector<vector<Node>> field(h, vector<Node>(w));
    beforeAve = ave;
    ave = (left + right) / 2;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        for (int k = 0; k < 2; k++) {
          int y = i + dy[k];
          int x = j + dx[k];
          if(x < 0 || x >= w || y < 0 || y >= h) continue;
          field[i][j].to.push_back({y, x});
          if(v[y][x] == '.' || v[y][x] == 'S' || v[y][x] == 'G')
            field[i][j].cost.push_back(1);
          else
            field[i][j].cost.push_back(ave);
        }
      }
    }

    res = djikstra(field, startY, startX, goalY, goalX);
    if(res == t) break;
    if(res < t) left = ave;
    else right = ave;
  }
  if(res <= t) cout << ave << endl;
  else cout << beforeAve << endl;
}
