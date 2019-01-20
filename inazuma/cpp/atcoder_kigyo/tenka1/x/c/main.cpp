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
  double N;
  cin >> N;
  double k = 4 / N;
  for (int n = 1; n <= 3500; n++) {
    for (int w = 1; w <= 3500; w++)
    {
      double bunsi = n * w;
      double bunbo = k*n*w - w - n;
      double h = bunsi / bunbo;
      if(ceil(h) == (h) && h > 0 && h <= 3500)
      {
        cout << h << " " << n << " " << w <<  endl;
        return 0;
      }
    }
  }
}
