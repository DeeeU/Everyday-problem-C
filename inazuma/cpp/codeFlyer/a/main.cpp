#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int a, b;
  cin >> a >> b;
  for (int i = a; i >= 0; i--)
  {
    if (i % b == 0)
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
