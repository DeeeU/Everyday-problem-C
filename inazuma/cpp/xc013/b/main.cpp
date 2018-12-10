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
  int n, l, r;
  cin >> n >> l >> r;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(v[i] < l) cout << l;
    else if(v[i] > r) cout << r;
    else cout << v[i];
    cout << ' ';
  }
  cout << endl;

}
