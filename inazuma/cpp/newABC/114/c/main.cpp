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
  map<int, int> mp;
  int digit = log10(n) + 1;
  for (int i = 0; i < digit; i++) {
    mp[3] = (double(n) % pow(10, i) >= 3) ? 1 : 0;
  }


}
