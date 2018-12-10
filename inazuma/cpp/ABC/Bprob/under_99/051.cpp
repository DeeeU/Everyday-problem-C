#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int k, s;
  cin >> k >> s;
  int res = 0;
  for (int x = 0; x <= k; x++){
    for (int y = 0; y <= k; y++){
      int z = s - x - y;
      if (z >= 0 && z <= k) {
        res++;
      }
    }
  }
  cout << res << endl;
  return 0;
}
