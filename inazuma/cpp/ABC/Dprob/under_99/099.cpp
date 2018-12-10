#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n, c;
  cin >> n >> c;
  vector<vector<int>> iwakan(c,vector<int>(c, 0));
  vector<vector<int>> field(n,vector<int>(n, 0));
  for (int i = 0; i < c; i++){
    for (int j = 0; j < c; j++){
      cin >> iwakan[i][j];
    }
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> field[i][j];
    }
  }

  int res = 0;
  for (int i = 0; i < i; i++){
    for (int j = 0; j < j; j++){
      int minv = INT_MAX;
      for (int k = 0; k < c; k++){
        for (int l = 0; l < c; l++){
          if ((field[i][j] + l) % 3 == (i+1 + j+1) % 3) {
            iwakan[field[i][j]][]
          }
        }
      }
    }
  }



}
