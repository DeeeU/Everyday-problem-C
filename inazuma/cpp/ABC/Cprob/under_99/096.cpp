#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int h, w;
  cin >> h >> w;
  vector<string> v(h, ".");
  for (int i = 0; i < h; i++){
    cin >> v[i];
  }
  int dx[4] = {-1, 0, 1, 0};
  int dy[4] = {0, -1, 0, 1};

  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      if (v[i][j] == '#') {
        int count = 0;
        for (int k = 0; k < 4; k++){
          // cout << count << endl;
          if (i + dy[k] < 0 || j + dx[k] < 0 || i + dy[k] >= h || j + dx[k] >= w) {
            count++;
            if (count == 4) {
              cout << "No" << endl;
              return 0;
            }
            continue;
          }
          if (v[i + dy[k]][j + dx[k]] == '.') {
            count++;
            if (count == 4) {
              cout << "No" << endl;
              return 0;
            }
          }
        }
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
