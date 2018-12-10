#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  string s;
  cin >> s;
  int res = 700;
  for (int i = 0; i < 3; i++){
    if (s[i] == 'o') {
      res += 100;
    }
  }
  cout << res << endl;
  return 0;
}
