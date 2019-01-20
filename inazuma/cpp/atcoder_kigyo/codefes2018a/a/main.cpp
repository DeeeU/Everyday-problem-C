#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int a, b, c, s;
  cin >> a >> b >> c >> s;
  if(s - (a + b + c)  <= 3 && s - (a + b + c) >= 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

}
