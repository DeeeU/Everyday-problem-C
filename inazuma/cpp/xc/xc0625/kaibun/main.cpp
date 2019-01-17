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
  // cout << s + '?' << endl;
  int num = int(s.size()) - 1;
  bool isKaibun = true;
  for (int i = 0; i < num / 2; i++)
  {
    if(s[i] != s[num-i]) {
      isKaibun = false;
      break;
    }
  }
  if(isKaibun){
    cout << 0 << endl;
    return 0;
  }

  int res = 0;
  while(true) {
    res++;
    s += '?';
    // cout << s << endl;
    // num = int(s.size()) -1;
    isKaibun = true;
    for (int i = 0; i < double(num + res) / 2; i++)
    {
      // cout << num << endl;
      // cout << res << endl;
      // cout << double(num + res) / 2 << endl;
      if(s[i] != s[num - i + res] && s[i] != '?' && s[num-i + res] != '?')
      {
        isKaibun = false;
      }
    }
    if(isKaibun){
      cout << res << endl;
      return 0;
    }
  }
}
