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
vector<int> dp(10, 0);
vector<int> a;
vector<int> b;
vector<int> c;

void dfs(){
  for (int i = 1; i < n; i++)
  {
    dp[i] = max( + )
  }
}

int main(){
  cin >> n;
  for (int i = 0; i < n; i++) {
    int tmp1, tmp2, tmp3;
    cin >> tmp1 >> tmp2 >> tmp3;
    a.push_back(tmp1);
    b.push_back(tmp2);
    c.push_back(tmp3);
  }
  dp[0] = max({a[0], b[0], c[0]});


}
