#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  string s, t;
  cin >> s >> t;
  string tmp = "atcoder";
  for (int i = 0; i < int(s.size()); i++){
    if (s[i] == t[i]) {
      continue;
    }
    if (s[i] == '@') {
      for (int j = 0; j < 7; j++){
        if (t[i] == tmp[j]) {
          goto LABEL;
        }
      }
    }else if (t[i] == '@') {
      for (int j = 0; j < 7; j++){
        if (s[i] == tmp[j]) {
          goto LABEL;
        }
      }
    }
    cout << "You will lose" << endl;
    return 0;
    LABEL:;
  }
  cout << "You can win" << endl;
  return 0;
}
