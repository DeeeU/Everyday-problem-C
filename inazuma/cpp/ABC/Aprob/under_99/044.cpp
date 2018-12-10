#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n,k,x,y,res;
  cin >> n >> k >> x >> y;
  if (n <= k) {
    res = n * x;
  }else{
    res = k * x + (n-k) * y;
  }
  cout << res << endl;
  return 0;
}
