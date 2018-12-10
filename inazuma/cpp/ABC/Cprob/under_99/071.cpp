#include <bits/stdc++.h>

using namespace std;

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

  sort(v.begin(), v.end());
  vector<p> counts;
  int count = 0;

  for (int i = 1; i < n; i++)
  {
    if (v[i] != v[i-1])
    {
      counts.push_back({v[i-1], i - count});
      count = i;
    }
  }

  counts.push_back({v[n-1], n - count});

  sort(counts.rbegin(), counts.rend());

  // for(p i : counts){
  //   cout << i.first << endl;
  //   cout << i.second << endl;
  // }
  ll res = -1;
  
  for(p i : counts)
  {
    if (res == -1 && i.second >= 4)
    {
      res = i.first * i.first;
      cout << res << endl;
      return 0;
    }
    if (i.second >= 2 && res == -1)
    {
      res = i.first;
    }
    else if (i.second >= 2 && res != -1)
    {
      res *= i.first;
      cout << res << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  // for(p i : counts){
  //   cout << i.first << endl;
  //   cout << i.second << endl;
  //   cout << "===============" << endl;
  // }


  return 0;
}
