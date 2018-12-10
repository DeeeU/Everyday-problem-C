#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int n, d;
  cin >> n >> d;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  vector<ll> distance(1, 0);

  for (int i = 0; i < n; i++)
  {
    distance.push_back(distance[i] + v[i]);
  }

  int res = 0;
  for (int i = 1; i < n; i++)
  {
    int flag = 0;
    int tmp1 = 0, tmp2;
    for (int j = i+1; j < n; j++)
    {
      if (distance[j] - distance[i] >= d && flag == 0)
      {
        tmp1 = j;
        flag = 1;
        // cout << tmp1 << endl;
        continue;
      }
      if (distance[j] - distance[tmp1] >= d && flag == 1)
      {
        flag = 0;
        tmp2 = n -j;
        res += ((n-j) * (j - tmp1));
        // cout << tmp2 << endl;
        cout << res << endl;
        break;
      }
    }
  }
  cout << res << endl;
  return 0;
}
