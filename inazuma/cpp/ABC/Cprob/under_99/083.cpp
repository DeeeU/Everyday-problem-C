#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;


int main()
{
  // long double x, y;
  // cin >> x >> y;
  // long double tmp = log(y / x) / log(2);
  // int a = tmp;
  // cout << a + 1 << endl;
  ll x, y;
  cin >> x >> y;
  ll i = 1;
  int count = 0;
  while(y >= i * x) {
    count++;
    i *= 2;
  }
  cout << count << endl;

}
