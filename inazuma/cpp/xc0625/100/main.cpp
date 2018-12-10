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
  if (s[0] != s[1] && s[0] != s[2] && s[1] != s[2])
  {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
