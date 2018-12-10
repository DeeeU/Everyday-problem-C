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
  for(int i = 0; i < int(s.size()); i++)
  {
    if(s[i] == 'B')
    {
      if(i == 0){
        s = s.substr(1, int(s.size())-1);
      }
      else
      {
        s = s.substr(0, i-1) + s.substr(i+1);
      }
      i = -1;
    }
  }
  cout << s << endl;
}
