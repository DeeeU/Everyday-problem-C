#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;


int main(void)
{
  int n, m;
  cin >> n >> m;
  vector<p> student(n, {0, 0});
  vector<p> check(m, {0,0});
  for (int i = 0; i < n; i++){
    cin >> student[i].first >> student[i].second;
  }
  for (int i = 0; i < m; i++){
    cin >> check[i].first >> check[i].second;
  }


  for (int i = 0; i < n; i++){
    int minv = INT_MAX;
    int res = 0;
    for (int j = 0; j < m; j++){
      if (minv > abs(student[i].first - check[j].first) + abs(student[i].second - check[j].second)) {
        minv = abs(student[i].first - check[j].first) + abs(student[i].second - check[j].second);
        res = j + 1;
      }
    }
    // cout << minv << endl;
    cout << res << endl;
  }
  return 0;
}
