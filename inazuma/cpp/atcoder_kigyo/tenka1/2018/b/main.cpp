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
  ll a, b, k;
  cin >> a >> b >>k;
  for (int i = 0; i < k; i++)
  {
    if(i % 2 == 0)
    {
      b += a / 2;
      a /= 2;
    }
    else
    {
      a += b / 2;
      b /= 2;
    }
  }

  cout << a << ' ' << b << endl;

}
