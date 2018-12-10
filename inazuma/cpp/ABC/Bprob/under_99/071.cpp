#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  vector<char> v(int(s.size()), 'a');
  for (int i = 0; i < int(s.size()); i++){
    v[i] = s[i];
  }
  set<char> set(v.begin(), v.end());
  vector<char> v2(set.begin(), set.end());
  // for(char c : v2) cout << c;
  // cout << endl;
  if (int(v2.size()) == 26) {
    cout << "None" << endl;
    return 0;
  }

  string tmp = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 0; i < 26; i++){
    if (v2[i] != tmp[i]) {
      cout << tmp[i] << endl;
      return 0;
    }
  }
  return 0;
}
