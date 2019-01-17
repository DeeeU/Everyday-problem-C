#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

struct info {
  int big;
  int cost;
  int index;
};

bool cmp(const info &a, const info &b)
{
  return a.big < b.big;
}

int main(){
  int n, d;
  cin >> n >> d;
  vector<info> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i].big;
    v[i].index = i;
  }

  sort(all(v), cmp);


}
