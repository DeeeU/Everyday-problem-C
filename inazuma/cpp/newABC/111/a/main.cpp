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
  string s;
  cin >> s;
  for (int i = 0; i < 3; i++)
  {
    if(s[i] == '1') s[i] = '9';
    else s[i] = '1';
  }
  cout << s << endl;

}
