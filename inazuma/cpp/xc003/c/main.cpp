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
  vector<int> a(n, 0);
  vector<int> sosu;
  for (int i = 0; i < n; i++)

  {
    cin >> a[i];
    sosu.push_back(a[i]);
    int j = 2;
    int tmp = a[i];
    while(tmp != 1)
    {
      if(tmp % j == 0)
      {
        tmp /= j;
        sosu.push_back(j);
      }
      else j++;
    }
  }
  set<int> s(all(sosu));

  for (int i = 0; i < int(a.size())-1; i++)
  {
    if(k == a[i])
    {
      cout << "POSSIBLE" << endl;
      return 0;
    }
    if(k < a[i])
    {
      int dif = abs(k - a[i]);
      cout << "==" << endl;
      for (int j = 0; j < int(sosu.size())-1; j++)
      {
        if(dif % sosu[j] == 0){
          cout << sosu[j] << endl;
          cout << "POSSIBLE" << endl;
          return 0;
        }
      }
    }
  }

  cout << "IMPOSSIBLE" << endl;




}
