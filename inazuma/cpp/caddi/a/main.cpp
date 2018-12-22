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

  string s;
  cin >> s;
  int res = 0;
  for (int i = 0; i < 4; i++) {
    if(s[i] == '2') res++;
  }
  cout << res << endl;
}
