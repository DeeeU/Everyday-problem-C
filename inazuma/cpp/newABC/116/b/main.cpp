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
  int s;
  cin >> s;
  vector<int> v;
  v.push_back(0);
  v.push_back(s);
  map<int, int> mp;
  mp[s] = 1;

  int i = 2;
  while(true) {
    if(v[i-1] % 2 == 0) v.push_back(v[i-1] / 2);
    else v.push_back(v[i-1] * 3 + 1);
    if(mp[v[int(v.size()-1)]] == 1) break;
    mp[v[int(v.size()-1)]]=1;
    i++;
  }

  cout << i << endl;

}
