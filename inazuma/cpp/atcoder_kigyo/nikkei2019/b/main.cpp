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
  string a, b, c;
  cin >> n >> a >> b >> c;
  int res = 0;
  for (int i = 0; i < n; i++) {
    vector<int> tmp;
    map<char, int> count;
    count[a[i]]++;
    count[b[i]]++;
    count[c[i]]++;
    for(auto j : count){
      tmp.push_back(j.second);
    }
    int maxv = *max_element(all(tmp));
    res += 3 - maxv;
  }
  cout << res << endl;


}
