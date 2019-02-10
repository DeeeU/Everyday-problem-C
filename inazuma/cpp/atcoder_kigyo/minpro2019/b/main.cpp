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
  vector<p> v(3);
  vector<int> count(4, 0);
  for (int i = 0; i < 3; i++) {
    cin >> v[i].first >> v[i].second;
    count[v[i].first-1]++;
    count[v[i].second-1]++;
  }

  for (int i = 0; i < 4; i++) {
    if(count[i] == 3){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;

}
