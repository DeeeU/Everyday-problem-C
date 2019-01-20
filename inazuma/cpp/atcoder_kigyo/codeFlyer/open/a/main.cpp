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
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int count = 0;
  for (int i = 1; i <= 10; i++)
  {
    for (int j = 0; j < n; j++)
    {
      // cout << v[j] % int(pow(10, i)) << endl;
      if(v[j] % int(pow(10, i)) != 0){
        cout << count << endl;
        return 0;
      }
    }
    count++;
  }
}
