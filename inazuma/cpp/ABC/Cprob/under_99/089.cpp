using namespace std;

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <climits>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <numeric>
typedef long long ll;
typedef pair<int,int> p;

int main()
{
  ll n;
  cin >> n;
  vector<string> name;
  vector<ll> count(5,0);
  for (ll i = 0; i < n; i++)
  {
    string tmp;
    cin >> tmp;
    // name.push_back(tmp);
    if (tmp[0] == 'M')
    {
      count[0]++;
    }else if (tmp[0] == 'A')
    {
      count[1]++;
    }else if (tmp[0] == 'R')
    {
      count[2]++;
    }else if (tmp[0] == 'C')
    {
      count[3]++;
    }else if (tmp[0] == 'H')
    {
      count[4]++;
    }

  }
  // for (ll i = 0; i < 5; i++)
  // {
  //   cout << count[i] << endl;
  // }

  ll res = 0;
  for (ll i = 0; i < 5; i++)
  {
    for (ll j = i+1; j < 5; j++)
    {
      for (ll k = j+1; k < 5; k++)
      {
        // if (i != j && i != k && j != k)
        // {
          // cout << cnt << endl;
          // cnt++;
          res += (count[i] * count[j] * count[k]);
        // }
      }
    }
  }
  cout << res << endl;
}
