using namespace std;
#include <bits/stdc++.h>

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int main(){
  int n;
  int x;
  cin >> n >> x;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int prev = v[0];
  int res = 0;

  if(v[0] > x)
  {
    res += v[0] - x;
    v[0] = x;
  }

  for (int i = 1; i < n; i++) {
    int sum = prev + v[i];
    res += max(sum - x, 0);
    v[i] -= max(sum - x, 0);
    prev = v[i];
  }


  cout << res << endl;
}
