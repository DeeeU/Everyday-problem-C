#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<ll,ll> p;

int max_value(std::map<int, int> m) {
  int max = 0;
  for (std::map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
    if (max < it->second) max = it->second;
  }
  return max;
}

int main()
{
  int n;
  cin >> n;
  vector<int> v(n, 0);

  map<int, int> mp1;
  map<int, int> mp2;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(i % 2 == 0) mp1[v[i]]++;
    else mp2[v[i]]++;
  }

  int max1 = max_value(mp1);
  int max2 = max_value(mp2);

  int maxk1;
  int maxk2;

  for(auto a : mp1)
  {
    // cout << a.first << " : " << a.second << endl;
    if(a.second == max1) maxk1 = a.first;
    // cout << maxk1 << endl;
  }

  for(auto a : mp2)
  {
    // cout << a.first << " : " << a.second << endl;
    if(a.second == max2) maxk2 = a.first;
    // cout << maxk2 << endl;
  }

  // cout << maxk1 << endl;
  // cout << maxk2 << endl;

  // for(auto a : mp1)
  // {
  //   cout << a.first << " : " << a.second << endl;
  // }

  mp1.erase(maxk1);
  mp2.erase(maxk2);

  // for(auto a : mp1)
  // {
  //   cout << a.first << " : " << a.second << endl;
  // }
  // cout << mp1.size() << endl;

  int res = n - max1 - max2;
  if(maxk1 == maxk2)
  {
    int tmp1 = n - max_value(mp1) - max2;
    int tmp2 = n - max1 - max_value(mp2);
    res = min(tmp1, tmp2);
    // if(max1 < max2)
    //   max1 = max_value(mp1);
    // else
    //   max2 = max_value(mp2);
  }
  // cout << max1 << endl;
  // cout << max2 << endl;

  cout << res << endl;

}
