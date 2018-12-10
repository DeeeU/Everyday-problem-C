#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  string s;
  cin >> s;
  string tmp = "abcdefghijklmnopqrstuvwxyz";


  for (int i = 0; i < int(s.size()); i++){
    for (int j = 0; j < int(tmp.size()); j++){
      if (s[i] == tmp[j]) {
        tmp.erase(tmp.begin() + j);
        break;
      }
    }
  }

  if (int(s.size()) == 26) {
    for (int i = 25; i <= 0; i--){
      

    }
    s.erase(i+1);
    while(true) {
      s[int(s.size())]++;
      for (int k = 0; k < int(tmp.size()); k++){
        if (s[int(s.size())] == tmp[i]) {
          break;
        }
      }
      cout << s << endl;
      return 0;
    }

  }


  // cout << s + tmp[0] << endl;
  return 0;
}
