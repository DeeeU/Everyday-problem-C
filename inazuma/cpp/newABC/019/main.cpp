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
  char tmp = s[0];
  vector<string> v;
  for(int i = 0; i < int(s.size()); i++)
  {
    if(tmp != s[i])
    {
      v.push_back(s.substr(0, i));
      s = s.substr(i);
      i = 0;
      tmp = s[i];
    }
  }
  v.push_back(s);
  

  for(int i = 0; i < int(v.size()); i++)
  {
    v[i] = v[i][0] + to_string(int(v[i].size()));
  }

  for(string a : v) cout << a;
  cout << endl;
}
