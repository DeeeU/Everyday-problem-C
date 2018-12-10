#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  string a, b, c;
  cin >> a >> b >> c;
  if (a[int(a.size())-1] == b[0] && b[int(b.size())-1] == c[0]) {
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
