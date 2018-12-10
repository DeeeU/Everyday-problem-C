#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int a, b, x;
  cin >> a >> b >> x;
  if (a + b >= x && a <= x) {
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
