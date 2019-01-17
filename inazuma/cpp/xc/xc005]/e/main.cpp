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
  ll x, y;
  cin >> x >> y;

  if(x == 2 || y == 2)
  {
    if(y % 2 == 0)
    {
      cout << "Alice" << endl;
      return 0;
    }
    else
    {
      cout << "Brown" << endl;
      return 0;
    }
  }

  if(x % 2 == 1 && y % 2 == 1)
  {
    cout << "Alice" << endl;
    return 0;
  }

  int type = 0;
  if(x % 2 == 0)type++;
  if(y % 2 == 0)type++;

  if(type == 1)
  {
    cout << "Alice" << endl;
  }
  else
  {
    cout << "Brown" << endl;
  }



}
