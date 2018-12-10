#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int x, t;
  cin >> x >> t;
  if (t >= x) {
    cout << 0 << endl;
    return 0;
  }
  cout << x - t << endl;
  return 0;
}
