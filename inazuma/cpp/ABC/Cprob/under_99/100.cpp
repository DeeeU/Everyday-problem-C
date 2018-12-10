#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  vector<int> sam;

  for (int i = 0; i < 100; i++)
  {
    int tmp = pow(2, i);
    if(tmp <= 1000000000)
    sam.push_back(tmp);
  }
  int res = 0;
  for(int i : v)
  {
    while(i % 2 == 0)
    {
      res++;
      i /= 2;
    }
  }

  cout << res << endl;
}
