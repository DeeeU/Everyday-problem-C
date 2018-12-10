#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int
typedef long long ll;
typedef pair<ll,ll> p;

int n, m;
int count = 0;
vector<vector<int>> graph(60,vector<int>(60, 0));
vector<vector<bool>> visit(60,vector<bool>(60, false));

int main()
{
  cin >> n >> m;
  // vector<p> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    int hoge, huga;
    cin >> hoge >> huga;
    graph[hoge][huga] = 1;
    graph[huga][hoge] = 1;
    // cin >> v[i].first >> v[i].second;
  }

  for(vector<int> i : graph)
  {
    for(int j : i){
      cout << j << " ";
    }
    cout << endl;
  }

}
