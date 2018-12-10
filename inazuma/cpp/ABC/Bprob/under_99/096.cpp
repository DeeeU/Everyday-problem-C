#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  ll a, b, c, k;
  cin >> a >> b >> c >> k;
  int maxv = max({a, b, c});
  for (int i = 0; i < k; i++){
    maxv *= 2;
  }

  if (a >= b && a >= c) {
    a = maxv;
  }else if (b >= a && b >= c){
    b = maxv;
  }else{
    c = maxv;
  }

  cout << a + b + c << endl;
  return 0;
}
