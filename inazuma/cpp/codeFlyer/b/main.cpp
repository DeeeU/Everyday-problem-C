#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int a, b, n;
  cin >> a >> b >> n;
  string s;
  cin >> s;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'S')
    {
      a--;
    }else if (s[i] == 'C'){
      b--;
    }else{
      if (a > b)
      {
        a--;
      }else if (a < b){
        b--;
      }else{
        a--;
      }
    }
  }
  if (a < 0)
  {
    a = 0;
  }
  if (b < 0)
  {
    b = 0;
  }
  cout << a << endl;
  cout << b << endl;

  return 0;
}
