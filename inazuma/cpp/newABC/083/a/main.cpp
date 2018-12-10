#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if(a + b == c + d) cout << "Balanced" << endl;
  else if(a + b < d + c) cout << "Right" << endl;
  else cout << "Left" << endl;
}
