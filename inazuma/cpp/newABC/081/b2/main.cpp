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
  cin >> n;
  vector<int> v(n, 0);

  int ave = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    ave += v[i];
  }
  if(ave % n != 0)
  {
    cout << -1 << endl;
    return 0;
  }else{
    ave /= n;
  }

  int num = 0;
  int res = 0;
  for (int i = 0; i < n; i++) {
    num += ave - v[i];
    if(num != 0) res++;
  }

  cout << res << endl;




}
