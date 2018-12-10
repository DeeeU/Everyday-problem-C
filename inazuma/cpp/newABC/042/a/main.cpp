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
  int a,b,c;
  cin >> a >> b >> c;
  
  int count5 = 0;
  int count7 = 0;
  if(a == 5) count5++;
  if(a == 7) count7++;
  
  if(b == 5) count5++;
  if(b == 7) count7++;

  if(c == 5) count5++;
  if(c == 7) count7++;
  
  if(count5 == 2 && count7 == 1) cout << "YES" << endl;
  else cout << "NO" << endl;
}
