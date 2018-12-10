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
  cin >> n;

  if(n % 4 == 0 || n % 7 == 0 || n % 11 == 0)
  {
    cout << "Yes" << endl;
    return 0;
  }
  int tmp = n;
  
  while(tmp > 0)
  {
    if(tmp % 4 == 0 || tmp % 7 == 0 || tmp % 11 == 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
    tmp -= 4;
  }

  tmp = n;
  
  while(tmp > 0)
  {
    if(tmp % 4 == 0 || tmp % 7 == 0 || tmp % 11 == 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
    tmp -= 7;
  }

  cout << "No" << endl;



}
