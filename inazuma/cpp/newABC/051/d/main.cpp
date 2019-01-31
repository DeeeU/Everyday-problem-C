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
  vector<p> detail;
  bool done = false;
  int minCost = INT_MAX;
  int from_node = -1;
};

map<p, bool> used;

void shortest_route();

int djikstra(vector<Node> v, int start, int goal){
  int nodeNum = int(v.size());
  v[start].minCost = 0;
  int now = start;
  while(true) {
    v[now].done = true;
    if(now == goal) {
      int i = now;
      while(true){
        if(v[i].from_node == -1) break;
        used[{i, v[i].from_node}] = true;
        used[{v[i].from_node, i}] = true;
        i = v[i].from_node;
      }
      return v[now].minCost;
    }
    int edgeNum = int(v[now].to.size());
    for (int i = 0; i < edgeNum; i++) {
      int nextNodeIndex = v[now].to[i];
      if(v[nextNodeIndex].minCost > v[now].minCost + v[now].cost[i]){
        v[nextNodeIndex].minCost = v[now].minCost + v[now].cost[i];
        v[nextNodeIndex].from_node = now;
      }
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

int res = 0;

int main(){
  int node_num, edge_num;
  cin >> node_num >> edge_num;
  vector<Node> v(node_num);
  for (int i = 0; i < edge_num; i++) {
    int to, from, cost;
    cin >> from >> to >> cost;
    to--;from--;
    v[from].to.push_back(to);
    v[from].cost.push_back(cost);
    v[to].to.push_back(from);
    v[to].cost.push_back(cost);
  }

  for (int i = 0; i < node_num - 1; i++) {
    for (int j = i + 1; j < node_num; j++) {
      if(i == j) continue;
      djikstra(v, i, j);
    }
  }
  cout << edge_num - int(used.size()) / 2 << endl;

}
