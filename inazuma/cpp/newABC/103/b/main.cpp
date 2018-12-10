#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;

string rotate(string s)
{
  return s.substr(1, int(s.size())-1) + s[0];
}

int main()
{
  string s, t;
  cin >> s >> t;

  for (int i = 0; i < int(s.size()); i++)
  {
    if(s == t){
      cout << "Yes" << endl;
      return 0;
    }
    s = rotate(s);
    // cout << s << endl;
  }
  cout << "No" << endl;
}
