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
  string s;
  cin >> n >> s;
  int counter = 0;
  int res = 0;

  for (int i = 0; i < n; i++)
  {
    if(s[i] == 'I') counter++;
    else counter--;
    res = max(res, counter);
  }
  cout << res << endl;

}
