#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int
typedef long long ll;
typedef pair<ll,ll> p;

string s,t;
vector<string> v;

void match(int pos)
{
  for(int i = pos; i < pos + int(t.size()); i++)
  {
    if(s[i] != t[i-pos] && s[i] != '?') return;
  }
  string tmp = s;
  for(int i = 0; i < int(s.size()); i++)
  {
    if(s[i] == '?') tmp[i] = 'a';
    if(i >= pos && i < pos + int(t.size())) tmp[i] = t[i-pos];
  }
  // v.push_back(tmp.substr(pos, int(t.size())));
  v.push_back(tmp);
}

int main()
{
  cin >> s >> t;
  for (int i = 0; i <= int(s.size()) - int(t.size()); i++)
  {
    match(i);
  }
  sort(all(v));
  // for(string tmp : v) cout << tmp << endl;
  if(int(v.size()) == 0) cout << "UNRESTORABLE" << endl;
  else cout << v[0] << endl;
}
