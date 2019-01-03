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
  int t;
  cin >> t;
  vector<string> v(t, "@");
  for (int i = 0; i < t; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < t; i++) {
    int res = 0;
    int size = int(v[i].size());
    for (int j = 0; j < size-4; j++) {
      if(v[i][j] == 't'){
        string tmp = v[i].substr(j, 5);
        if(tmp == "tokyo"){
          res++;
          j += 4;
        }
      }

      if(v[i][j] == 'k'){
        string tmp = v[i].substr(j, 5);
        if(tmp == "kyoto"){
          res++;
          j += 4;
        }
      }
    }
    cout << res << endl;
  }

}
