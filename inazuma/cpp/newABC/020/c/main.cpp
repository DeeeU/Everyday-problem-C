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

int djikstra(vector<Node> v, int start, int goal){
  int nodeNum = int(v.size());
  v[0].minCost = 0;
  int now = start;
  while(true) {
    // printNode(v);
    v[now].done = true;
    int edgeNum = int(v[now].to.size());
    for (int i = 0; i < edgeNum; i++) {
      int nextNodeIndex = v[now].to[i];
      v[nextNodeIndex].minCost =
        min(v[nextNodeIndex].minCost, v[now].minCost + v[now].cost[i]);
    }

    int minNodeIndex = -1;
    int minNodeCost = INT_MAX;
    for (int i = 0; i < nodeNum; i++) {
      if(i == now) continue;
      if(minNodeCost > v[i].minCost && !v[i].done){
        minNodeIndex = i;
        minNodeCost = v[i].minCost;
      }
    }
    now = minNodeIndex;
    if(now == goal) return v[now].minCost;
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
  ll ave = -1;
  for (ll a = 1; a <= 100; a++) {
    cout << "a" << endl;
    cout << a << endl;
    vector<vector<Node>> field(h, vector<Node>(w));
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
            field[i][j].cost.push_back(a);
        }
      }
    }
    res = djikstra(field, startY, startX, goalY, goalX);
    // cout << res << endl;
    // cout << a << endl;
    // cout << "==" << endl;
    if(res <= t) ave = max(ave, a);
    cout << "=================================" << endl;
  }
  // cout << res << endl;
  cout << ave << endl;
}
