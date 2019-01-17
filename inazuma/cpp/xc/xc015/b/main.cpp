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
  int n, a, b;
  cin >> n >> a >> b;
  if((b - a) % 2 == 0) cout << "Alice" << endl;
  else cout << "Borys" << endl;

}
