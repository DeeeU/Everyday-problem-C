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
  vector<int> v(n, 0);
  bool flag = false;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if(v[i] % 2 == 1) flag = true;
  }

  if(flag) cout << "first" << endl;
  else cout << "second" << endl;

}
