#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main(void)
{
  ll a, b, c, k;
  cin >> a >> b >> c >> k;
  ll tmp = a - b;
  ll hoge = pow(10, 18);
  if (abs(tmp) > hoge) {
    cout << "Unfair" << endl;
  }else if (k % 2 == 0){
    cout << tmp << endl;
  }else{
    cout << tmp * -1 << endl;
  }
  return 0;
}
