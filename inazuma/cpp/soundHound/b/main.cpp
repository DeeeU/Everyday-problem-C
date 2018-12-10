#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  string s;
  ll w;
  cin >> s >> w;
  // for (int i = 0; i < int(s.size()) / w + 1; i++)
  // {
  //   cout << s[i * w];
  // }
  int i = 0;
  while(i * w <= int(s.size())-1) {
    cout << s[i * w];
    i++;
  }
  cout << endl;
}
