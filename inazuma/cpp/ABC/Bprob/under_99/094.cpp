#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> v(m, 0);
  for (int i = 0; i < m; i++){
    cin >> v[i];
  }

  int costA = 0;
  int costB = 0;
  for (int i = 0; i <= x; i++){
    for(int j : v){
      if (i == j) {
        costA++;
        break;
      }
    }
  }

  for (int i = x; i <= n; i++){
    for(int j : v){
      if (i == j) {
        costB++;
        break;
      }
    }
  }

  cout << min(costA, costB) << endl;


  return 0;
}
