#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  sort(all(v));
  int a = v[k-1] - v[0];
  for (int i = 0; i+k-1 < n; i++)
  {
    a = min(a, v[k-1+i] - v[i]);
  }
  cout << a << endl;
}
