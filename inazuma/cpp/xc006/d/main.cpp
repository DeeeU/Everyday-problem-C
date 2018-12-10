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
  string akiba = "KIHBR";

  int now = 0;
  for (int i = 0; i < int(s.size()); i++)
  {
    if(s[i] != akiba[now] && s[i] != 'A')
    {
      cout << "NO" << endl;
      return 0;
    }
    if(s[i] == akiba[now]) now++;
  }

  now = 0;
  akiba = "AKIHABARA";
  int count = 0;
  for (int i = 0; i < int(s.size()); i++)
  {
    if(s[i] != akiba[now])
    {
      if(akiba[now] == 'A'){
        i--;
        now++;
        count++;
        continue;
      }
      else{
        cout << "NO" << endl;
        return 0;
      }
    }
    now++;
  }
  if(s[s.size()-1] == 'R') count++;

  if(count + int(s.size()) != 9) cout << "NO" << endl;
  else cout << "YES" << endl;

}
