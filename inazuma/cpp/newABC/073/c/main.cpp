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

int djikstra(vector<Node> v, int start, int goal){
  int nodeNum = int(v.size());
  v[start].minCost = 0;
  int now = start;
  while(true) {
    if(now == goal) return v[now].minCost;
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
  }
}

int main(){
  int n, m, r;
  cin >> n >> m >> r;
  vector<int> rv(r);
  for (int i = 0; i < r; i++) {
    cin >> rv[i];
    rv[i]--;
  }


  vector<Node> v(m);
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--; b--;
    v[a].to.push_back(b);
    v[a].cost.push_back(c);
    v[b].to.push_back(a);
    v[b].cost.push_back(c);
  }

  int res = INT_MAX;


  do {
    int sum = 0;
    for (int i = 0; i < r-1; i++) {
      sum += djikstra(v, rv[i], rv[i+1]);
    }
    res = min(res, sum);
  } while (next_permutation(rv.begin(), rv.end()));


  cout << res << endl;

}
