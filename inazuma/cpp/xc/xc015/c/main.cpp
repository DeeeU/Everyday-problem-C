#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int n, a;
vector<int> v;
ll res = 0;

void dfs(int pos, ll sum, int num){
  if(pos == n){
    if(num == 0) return;
    if(sum % num == 0 && sum / num == a) res++;
    return;
  }
  dfs(pos + 1, sum, num);
  sum += v[pos];
  dfs(pos + 1, sum, num + 1);
}

int main(){
  cin >> n >> a;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  dfs(0, 0, 0);

  cout << res << endl;
}
