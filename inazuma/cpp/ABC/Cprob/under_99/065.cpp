
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;

ll tmp = 1;

void test(ll a){
  tmp *= a;
  tmp %= 1000000007;
  if (a > 1) {
    test(a-1);
  }
}

int main()
{
  ll n, m;
  cin >> n >> m;
  if (abs(n - m) > 1) {
    cout << 0 << endl;
    return 0;
  }else if (n == m) {
    test(n);
    ll tmpA = tmp;
    tmp = 1;
    test(m);
    ll tmpB = tmp;
    cout << (tmpA * tmpB)*2 % 1000000007 << endl;
  }else{
    test(n);
    ll tmpA = tmp;
    tmp = 1;
    test(m);
    ll tmpB = tmp;
    cout << (tmpA * tmpB) % 1000000007 << endl;
  }
  return 0;
}
