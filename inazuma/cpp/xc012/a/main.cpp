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
  ll a, b;
  cin >> a >> b;
  if(a * b <= 0) cout << "Zero" << endl;
  else if(a > 0 && b > 0) cout << "Positive" << endl;
  else if((b - a) % 2 == 0) cout << "Negative" << endl;
  else cout << "Positive" << endl;
}
