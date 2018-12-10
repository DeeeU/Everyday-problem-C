#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int w, a, b;
  cin >> w >> a >> b;
  int res = 0;
  if (a == b) {
    cout << 0 << endl;
    return 0;
  }
  while(true) {
    if (a > b) {
      if (b + w >= a) {
        cout << res << endl;
        return 0;
      }
      b++;
      res++;
    }else if (b > a) {
      if (a + w >= b) {
        cout << res << endl;
        return 0;
      }
      a++;
      res++;
    }
  }
  return 0;
}
