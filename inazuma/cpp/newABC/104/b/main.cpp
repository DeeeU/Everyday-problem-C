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
  if(s[0] != 'A')
  {
    cout << "WA" << endl;
    return 0;
  }
  s = s.substr(1);
  string tmp = s.substr(1, int(s.size()) - 2);
  int count = 0;
  for (int i = 0; i < int(tmp.size()); i++)
  {
    count += (tmp[i] == 'C');
    if(tmp[i] == 'C') tmp.erase(tmp.begin()+i);
  }
  if(count != 1)
  {
    cout << "WA" << endl;
    return 0;
  }
  s = s[0] + tmp + s[s.size()-1];

  for (int i = 0; i < int(s.size()); i++)
  {
    if(isupper(s[i])){
      cout << "WA" << endl;
      return 0;
    }
  }

  cout << "AC" << endl;

}
