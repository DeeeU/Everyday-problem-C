#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n, x;
  cin >> n >> x;
  if (x <= n-x) {
    cout << x-1 << endl;
  }else{
    cout << n-x << endl;
  }
  return 0;
}
