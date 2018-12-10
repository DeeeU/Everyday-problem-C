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
  int n;
  string s, t;
  cin >> n >> s >> t;

  int index = 0;
  for (int i = n-1; i >= 0; i--) {
    string tmp1 = s.substr(n-1-i);
    string tmp2 = t.substr(0, i+1);
    if(tmp1 == tmp2)
    {
      index = i+1;
      break;
    }
  }

  cout << 2 * n - index << endl;



}
