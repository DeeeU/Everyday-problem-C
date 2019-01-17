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
  int n = 0;
  int w = 0;
  int x = 0;
  int e = 0;
  for (int i = 0; i < int(s.size()); i++) {
    if(s[i] == 'N') n++;
    if(s[i] == 'W') w++;
    if(s[i] == 'S') x++;
    if(s[i] == 'E') e++;
  }

  if(n > 0 && w > 0 && x > 0 && e > 0) cout << "Yes" << endl;
  else if((n == 0 && x == 0) && (w > 0 && e > 0)) cout << "Yes" << endl;
  else if((n > 0 && x > 0) && (w == 0 && e == 0)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
