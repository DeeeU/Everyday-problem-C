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
  vector<int> v(n, 0);
  int secondv = 0;
  int maxv = 0;
  ll sum = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    if(maxv <= v[i])
    {
      secondv = maxv;
      maxv = v[i];
    }
  }
  sort(all(v));
  int tmp = ceil(double(secondv) / 2.0);
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    if(tmp < v[i] && v[i] != maxv && v[i] != secondv) flag = true;
    // v[i] -= tmp;
    // sum += v[i];
  }


  if(maxv % 2 == 1) cout << "first" << endl;
  else{
    if(flag) cout << "second" << endl;
    else if(secondv % 2 == 1) cout << "first" << endl;
    else cout << "second" << endl;
  }

}
