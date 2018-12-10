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
  ll a = ceil(pow(n, 0.5));

  while(true)
  {
    if(n % a == 0) 
    {
      string s = to_string(n / a);
      string s2 = to_string(a);
      // cout << s << endl;
      cout << max(s.size(), s2.size()) << endl;
      return 0;
    }
    // cout << (a - (n % a)) << endl;
    // a += (a - (n % a));
    // cout << a << endl;
    // cout << "=========" <<endl;
    // cout << n / a << endl;
    a--;
  }
}
