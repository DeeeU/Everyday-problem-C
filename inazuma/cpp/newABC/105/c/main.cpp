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
  ll n;
  cin >> n;
  string s = "";
  while(n != 0)
  {
    if(n % 2 != 0)
    {
      s = "1" + s;
      n--;
    }
    else s = "0" + s;
    n /= -2;
  }

  if(s == "") s = "0";

  cout << s << endl;
}
