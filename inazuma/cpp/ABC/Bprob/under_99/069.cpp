#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main(void)
{
  string s;
  cin >> s;
  cout << s[0] << int(s.size())-2 << s[int(s.size())-1] << endl;
  return 0;
}
