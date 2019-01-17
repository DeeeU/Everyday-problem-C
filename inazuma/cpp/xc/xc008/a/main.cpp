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
  int a,  b;
  string s;
  cin >> a >> b >> s;

  if(int(s.size()) >= a && int(s.size()) <= b)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

}
