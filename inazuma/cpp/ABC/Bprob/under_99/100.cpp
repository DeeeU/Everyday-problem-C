#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;


int main()
{
  ll d, n;
  cin >> d >> n;
  ll tmp = 0;
  if (d == 0 && n >= 100) tmp = n / 100;
  if (d == 1 && n == 100) tmp = 100;
  ll aaa = pow(100, d) * n + tmp;
  printf("%ld\n", aaa);
}
