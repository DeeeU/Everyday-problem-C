#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int main(){
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < 2 * n; i++)
  {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
  sort(all(v));
  int res = 0;

  for (int i = 0; i < 2 * n; i+=2)
  {
    res += v[i];
  }

  cout << res << endl;


}
