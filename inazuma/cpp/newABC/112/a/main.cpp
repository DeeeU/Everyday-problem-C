#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#ifndef bits/stdc++.h
  #include <bits/stdc++.h>
#endif /* end of include guard */

using namespace std;


#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int main(){
  int n, m;
  cin >> n >> m;
  if(n == 1)
  {
    cout << m << endl;
    return 0;
  }
  // int tmp = ceil(pow(m, 0.5));
  int tmp = ceil(m / n);

  for (int i = tmp; i >= 1; i--) {
    if(m % i == 0 && m / i >= n)
    {
      cout << i << endl;
      return 0;
    }
  }

}
