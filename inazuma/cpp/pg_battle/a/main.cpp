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
  int n, c;
  cin >> n >> c;
  map<int, p> mp;
  vector<int> v(c,0);
  sort(all(v));
  for (int i = 0; i < c; i++) {
    int tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    v[i] = tmp2 - tmp1;
  }
  sort(rall(v));

  cout << n - v[0] << endl;

}
