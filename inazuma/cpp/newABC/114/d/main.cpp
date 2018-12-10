#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int n;
int res = 0;
vector<int> v;
vector<int> dp;

void dfs(int step, ll count){
  if(count > 100) return;

  if(step == n){
    cout << count << endl;
    cout << "+++++++++++++++" << endl;
    if(count == 75) res++;
    return;
  }
  dfs(step+1, count);
  count += v[step];
  dfs(step+1, count);
}

int main(){
  cin >> n;


  for(int i = 1; i <= n; i++)
  {
    v.push_back(0);
    for (int j = 1; j <= i; j++)
    {
      if(i % j == 0) v[i-1]++;
    }
  }
  print(v);
  dfs(2, 2);

  cout << res << endl;


}
