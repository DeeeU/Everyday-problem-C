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
  int maxv = min(a, b);
  // if(a + b >= n){
  //   maxv = n;
  // }
  int minv = n - ((n-a) + (n-b));
  minv = max(0, minv);
  cout << maxv << " " << minv << endl;
}
