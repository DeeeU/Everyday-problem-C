#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  ll a, b, k;
  cin >> a >> b >> k;
  for (ll i = a; i <= b; i++){
    if (i <= (a + k - 1) || i >= (b - k + 1)) {
      cout << i << endl;
    }
  }

  return 0;
}
