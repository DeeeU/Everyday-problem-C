#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;

vector<int> uni(100000, -1);

int root(int a)
{
  if (uni[a] < 0) return a;
  else return uni[a] = root(uni[a]);
}

bool connect(int a, int b)
{
  a = root(a);
  b = root(b);
  if(a == b) return false;

  if(abs(uni[a]) < abs(uni[b]))
  {
    int tmp = a;
    a = b;
    b = tmp;
  }

  uni[a] += uni[b];
  uni[b] = a;
  return true;
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> nums(n, 0);
  vector<p> v(m, {0,0});
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  for (int i = 0; i < m; i++)
  {
    cin >> v[i].first >> v[i].second;
    connect(v[i].first, v[i].second);
  }

  int res = 0;
  for (int i = 0; i < n; i++)
  {
    if (root(nums[i]) == root(i+1) || nums[i] == i+1)
    {
      res++;
    }
  }
  cout << res << endl;
  return 0;
}
