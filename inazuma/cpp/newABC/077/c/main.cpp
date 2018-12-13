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
  int n;
  cin >> n;
  vector<int> a(n, 0);
  vector<int> b(n, 0);
  vector<int> c(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  sort(all(a));
  sort(all(b));
  sort(all(c));

  // print(a);
  // print(b);
  // print(c);
  //
  ll res = 0;

  for (int i = 0; i < n; i++)
  {
    auto au = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    auto cu = n - (upper_bound(c.begin(), c.end(), b[i]) - c.begin());
    // cout << au << " " << cu << endl;
    res += au * cu;
  }

  cout << res << endl;

}
