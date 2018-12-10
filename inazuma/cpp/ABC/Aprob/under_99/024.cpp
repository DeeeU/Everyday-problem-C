#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int a, b, c, k, s, t;
  cin >> a >> b >> c >> k >> s >> t;
  int price = a * s + b * t;
  if (s + t >= k) {
    price -= (s + t) * c;
  }
  cout << price << endl;
  return 0;
}
