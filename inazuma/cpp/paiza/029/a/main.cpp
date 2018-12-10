#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int n, m, g;
vector<p> v;
int counter = 0;
int from;

bool dfs(int start)
{
  if(start == g) return true;
  if(start == from) counter++;
  if(counter > 2)
  {
    cout << "NG" << endl;
    exit(0);
  }
  for (int i = 0; i < m; i++)
  {
    if(v[i].first == start)
    {
      if(dfs(v[i].second)) return true;
    }
  }
  return false;
}

int main(){
  cin >> n >> m >> g;
  for (int i = 0; i < m; i++)
  {
    pair<int, int> tmp;
    cin >> tmp.first >> tmp.second;
    v.push_back(tmp);
  }

  for (int i = 1; i <= n; i++)
  {
    counter = 0;
    from = i;
    if(!dfs(i))
    {
      cout << "NG" << endl;
      return 0;
    }
  }
  cout << "OK" << endl;
}
