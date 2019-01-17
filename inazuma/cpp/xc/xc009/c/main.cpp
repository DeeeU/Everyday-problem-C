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
  int res = 0;
  int gu = 0;

  for (int i = 0; i < int(s.size()); i++) {
    if(gu == 0)
    {
      if(s[i] == 'p')
      {
        res--;
        gu++;
      }
      else gu++;
    }
    if(s[i] == 'gu') gu++;
    else if(s[i] == '')
  }


}
