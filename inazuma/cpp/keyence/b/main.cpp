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
  int size = int(s.size());
  string keyence = "keyence";
  // int pos = 0;
  // bool used1 = false, used2 = false;
  // for (int i = 0; i < size; i++) {
  //   if(s[i] == keyence[pos]){
  //     if(used1) used2 = true;
  //     pos++;
  //   } else if(s[i] != keyence[pos]){
  //     if(!used1) used1 = true;
  //     if(used1 && used2){
  //       cout << "NO" << endl;
  //       return 0;
  //     }
  //   }
  //   if(pos == 7 && i == size-1) {
  //     cout << "YES" << endl;
  //     return 0;
  //   }
  // }
  //
  // cout << "NO" << endl;

  // cout << keyence.substr(0, 0) << endl;

  for (int i = 0; i < size-1; i++)
  {
    for (int j = 1; j < size; j++) {
      string tmp = s.substr(0, i) + s.substr(j);
      if(tmp == keyence){
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
}
