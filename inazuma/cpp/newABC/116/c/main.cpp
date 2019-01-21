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
  int res = 0;
  cin >> n;
  vector<int> v(n, 0);
  map<int, vector<int>> mp;
  for (int i = 0; i < n; i++) {
    int d, k;
    cin >> d >> k;
    mp[k].push_back(d);
  }
  print(mp);
  // for(auto a : mp){
  //   print(a);
  // }



}
