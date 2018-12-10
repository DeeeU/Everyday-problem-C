#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main(void)
{
  int a, b;
  string s;
  cin >> a >> b >> s;

  if (s[a] != '-') {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < a; i++){
    // cout << int(s[i]) + 1 << endl;
    if (s[i] == "1" || s[i] == "2" || s[i] == "3" || s[i] == "4" || s[i] == "5" || s[i] == "6" || s[i] == "7" || s[i] == "8" || s[i] == "9" || s[i] == "0") {
      cout << "Yes" << endl;
      return 0;
    }
  }

  for (int i = a+1; i < a + b + 1; i++){
    if (s[i] == "1" || s[i] == "2" || s[i] == "3" || s[i] == "4" || s[i] == "5" || s[i] == "6" || s[i] == "7" || s[i] == "8" || s[i] == "9" || s[i] == "0") {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
