#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<ll,ll> p;

ll digitSum(ll n)
{
  if(n < 10) return n;
  else return n % 10 + digitSum(n / 10);
}

int main()
{
  ll n;
  cin >> n;
  ll res = digitSum(n);
  ll digitNum = int(to_string(n).size());
  if(digitNum == 1)
  {
    cout << n << endl;
    return 0;
  }
  // cout << to_string(n)[0] - '0' << endl;

  res = max(res, ((to_string(n)[0]-'0')-1) + (digitNum-1)*9);

  cout << res << endl;
}
