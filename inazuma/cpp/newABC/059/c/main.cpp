#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int n;
vector<int> v;

ll calc(ll s) {
  ll sum = 0, res = 0;
  for (int i = 0; i < n; ++i, s *= -1) {
    sum += v[i];
    if (sum * s > 0) continue;
    res += abs(sum - s);
    sum += s * abs(sum - s);
  }
  return res;
}

int main(){
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
  cout << min(calc(1), calc(-1)) << endl;
}
