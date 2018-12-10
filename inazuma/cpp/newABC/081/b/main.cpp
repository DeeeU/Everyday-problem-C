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
  cin >> n;
  vector<int> v(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int res = 0;
  while(true) {
    for (int i = 0; i < n; i++) {
      if(v[i] % 2 == 0) v[i] /= 2;
      else
      {
        cout << res << endl;
        return 0;
      }
    }
    res++;
  }
}
