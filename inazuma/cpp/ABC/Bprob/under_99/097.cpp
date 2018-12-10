#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int x;
  cin >> x;
  vector<ll> v;
  for (int i = 100; i >= 1 ; i--){
    for (int j = 10; j > 1; j--){
      v.push_back(pow(i, j));
    }
  }
  sort(v.begin(), v.end());
for (int i = 99 * 9 - 1; i > 0; i--){
    if (v[i] <= x) {
      cout << v[i] << endl;
      return 0;
    }
  }
  return 0;
}
