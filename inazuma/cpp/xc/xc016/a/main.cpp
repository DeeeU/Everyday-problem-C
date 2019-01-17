#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

ll comb(int a, int b)
{
  ll res = 1;
  for (int i = a; i > a-b ; i--)
    res *= i;
  for (int i = 1; i <= b; i++)
    res /= i;
  return res;
}

int main(){
  int n, a, b;
  cin >> n >> a >> b;
  int tmp = b - a + 1;
  ll res = comb(tmp, n-2);
  res += (tmp - 2) * ;
  cout << res << endl;



}
