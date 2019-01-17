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
  int sum = 0;
  for (int i = 1; i < 101; i++) {
    if(i % 3 != 0 && i % 5 != 0) sum += i;
  }

  cout << sum << endl;

}
