#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  cout << a * b * 2 + a * c * 2 + b * c * 2 << endl;

  return 0;
}
