#include <bits/stdc++.h>

using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

typedef long long ll;
typedef pair<ll,ll> p;

vector<ll> dp = {0, 1};

ll gcd(ll a, ll b)
{
  if(b == 0) return a;
  else return gcd(b, a % b);
  // return (b == 0) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
  ll g = gcd(a, b);
  return a / g * b;
}

map<int, int> mp;

// O(root(n))
void count_divisor(int n){
  for (int i = 2; n > 1;)
  {
    if(n % i == 0){
      mp[i]++;
      n /= i;
    } else i++;
  }
}


int main()
{
  int n;
  cin >> n;
  vector<int> v(n-1, 0);

  for (int i = 2; i <= n; i++)
  {
    count_divisor(i);
  }

  ll res = 1;

  for(auto a : mp){
    res *= a.second + 1;
    res %= 1000000007;
  }

  cout << res << endl;
}
