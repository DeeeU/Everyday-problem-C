#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int
typedef long long ll;
typedef pair<ll,ll> p;
ll digitSum(int n)
{
  int tmp = log10(n);
  ll res = 0;
  for (int i = tmp; i > 0; i--)
  {
    res += n / (pow(10, i));
    n -= ((n / int((pow(10, i)))) * pow(10, i));
  }
  res += n;
  return res;
}

int main()
{
  ll a;
  cin >> a;
  ll b = digitSum(a);
  if (a % b == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
