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
  long double n,m;
  cin >> n >> m;

  long double ac = 100 * (n-m);

  long double bunsi = 1900 * (1 - m / pow(2, m));
  long double bunbo = 1 - (m / pow(2, m));
  cout << bunsi / bunbo + ac << endl;



}
