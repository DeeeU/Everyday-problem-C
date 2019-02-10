#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;


struct Node {
  vector<int> to;
  vector<int> cost;
  bool done = false;
  int minCost = INT_MAX;
};

int dijkstra(vector<Node> v, int start, int goal){
  int nodeNum = int(v.size());
  v[start].minCost = 0;
  int now = start;
  while(true) {
    // printNode(v);
    v[now].done = true;
    if(now == goal) return v[now].minCost;
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
  }
}

int main(){
  int h, w;
  cin >> h >> w;
  vector<vector<int>> field(h,vector<int>(w));
  vector<vector<int>> cost(10,vector<int>(10));
  vector<Node> cost_field(10);
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      int tmp;
      cin >> tmp;
      cost_field[i].to.push_back(j);
      cost_field[j].cost.push_back(tmp);
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> field[i][j];
    }
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cost[i][j] = dijkstra(cost_field, j, i);
    }
  }

  ll res = 0;
  Print(cost_field);

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if(field[i][j] == -1) continue;
      res += cost[field[i][j]][1];
    }
  }

  cout << res << endl;


}
