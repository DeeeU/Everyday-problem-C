#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;

bool checkInt(string s)
{
  for(int i = 0; i < int(s.size()); i++)
    if(!isdigit(s[i])) return false;
  return true;
}

int main()
{
  int a, b;
  string s;
  cin >> a >> b >> s;
  if(s[a] != '-')
  {
    cout << "No" << endl;
    return 0;
  }

  string tmp1 = s.substr(0, a);
  string tmp2 = s.substr(a+1, b);
  // cout << tmp1 << endl;
  // cout << tmp2 << endl;

  if (checkInt(tmp1) && checkInt(tmp2))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

}
