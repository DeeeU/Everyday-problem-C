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
  string s;
  cin >> s;
  while(true)
  {
    if(s[0] == 'u' || s[0] == 'k' || s[0] == 'o') s = s.substr(1);
    else if(s[0] == 'c' && s[1] == 'h') s = s.substr(2);
    else if(int(s.size()) == 0)
    {
      cout << "YES" << endl;
      return 0;
    }
    else {
      cout << "NO" << endl;
      return 0;
    }
  }
}
