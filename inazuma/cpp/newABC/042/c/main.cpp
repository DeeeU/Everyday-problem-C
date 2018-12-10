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
  int n, k;
  cin >> n >> k;
  vector<string> v(k, "@");
  for(int i = 0; i < k; i++)
  {
    cin >> v[i];
  }

  while(true)
  {
    bool flag = true;
    for(string i : v)
    {
      if(to_string(n).find(i) != string::npos) flag = false;
    }
    if(flag)
    {
      cout << n << endl;
      return 0;
    }
    n++;
  }

}
