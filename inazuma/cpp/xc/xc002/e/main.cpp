#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  ll n;
  cin >> n;
  vector<ll> from(n-1, 0);
  vector<ll> to(n-1, 0);
  vector<ll> cost(n-1, 0);
  for (ll i = 0; i < n-1; i++)
  {
    cin >> from[i] >> to[i] >> cost[i];
  }
  vector<vector<p>> graph(n, vector<p>());
  for(ll i = 0; i < n-1; i++)
  {
    graph[from[i]-1].push_back({to[i], cost[i]});
    graph[to[i]-1].push_back({from[i], cost[i]});
  }

  ll q, k;
  cin >> q >> k;
  vector<p> qv(q, {0,0});
  for(ll i = 0; i < q; i++)
  {
    cin >> qv[i].first >> qv[i].second;
  }


  queue<p> bfs;
  for(auto a : graph[k-1])
  {
    bfs.push(a);
  }
  vector<bool> visited(n, false);
  visited[k-1] = true;
  vector<ll> distance(n, 0);
  // cout << k-1 << " : " << distance[k-1] << endl;
  distance[k-1] = 0;


  while(ll(bfs.size()) != 0)
  {
    p tmp = bfs.front();
    bfs.pop();

    ll beforeCost = 0;
    for(auto a : graph[tmp.first-1])
    {
      if(visited[a.first-1]){
        beforeCost = distance[a.first-1];
        break;
      }
    }

    distance[tmp.first-1] = tmp.second + beforeCost;

    //cout << tmp.first << " : " << tmp.second << endl;
    // for(auto a : graph[tmp.first-1]) cout << a.first << " : " << a.second << endl;

    // cout << "==========" << endl;
    // cout << tmp.first-1 << endl;
    // cout << "==========" << endl;
    // for(bool a : visited) cout << a << endl;
    for(auto a : graph[tmp.first-1])
    {
      if(!visited[a.first-1])//cout << "push!" << endl;
      bfs.push(a);
    }
    visited[tmp.first-1] = true;

  }

  for(ll i = 0; i <q; i++)
  {
    cout << distance[qv[i].first-1] + distance[qv[i].second-1] << endl;
  }

  // cout << "==========" << endl;
  //
  //
  // for(auto a : distance)
  // {
  //   cout << a << endl;
  // }

}
