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
  string a, b;
  cin >> a >> b;
  if(a < b) cout << "<" << endl;
  else if(a > b) cout << ">" << endl;
  else cout << "=" << endl;

}
