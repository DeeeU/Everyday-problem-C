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
  int res = 0;
  for (int i = 0; i < 4; i++)
  {
    if(s[i] == '+') res++;
    if(s[i] == '-') res--;
  }
  cout << res << endl;
}
