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
  int h, w;
  cin >> h >> w;
  vector<vector<int>> vv(h, vector<int>(w, 0));
  vector<vector<int>> cp(h, vector<int>(w, 0));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> vv[i][j];
      cp[i][j] = vv[i][j];
    }
  }

  int count = 0;

  for (int i = 0; i < h-1; i++) {
    for (int j = 0; j < w-1; j++) {
      if(cp[i][j] % 2 == 1)
      {
        count++;
        cp[i][j]--;
        if(cp[i][j+1] % 2 == 0)
        {
          cp[i+1][j]++;
        }
        else
        {
          cp[i][j+1]++;
        }
      }
    }
    if(cp[i][w-1] % 2 == 1)
    {
      count++;
      cp[i][w-1]--;
      cp[i+1][w-1]++;
    }
  }

  for (int i = 0; i < w-1; i++) {
    if(cp[h-1][i] % 2 == 1)
    {
      count++;
      cp[h-1][i]--;
      cp[h-1][i+1]++;
    }
  }








  cout << count << endl;

  for (int i = 0; i < h-1; i++) {
    for (int j = 0; j < w-1; j++) {
      if(vv[i][j] % 2 == 1)
      {
        count++;
        vv[i][j]--;
        cout << i+1 << " "<< j+1 << " ";
        if(vv[i][j+1] % 2 == 0)
        {
          vv[i+1][j]++;
          cout << i+1+1 << " " << j+1 << endl;
        }
        else
        {
          cout << i+1 << " " << j+1+1 << endl;
          vv[i][j+1]++;
        }
      }
    }
    if(vv[i][w-1] % 2 == 1)
    {
      count++;
      vv[i][w-1]--;
      vv[i+1][w-1]++;
      cout << i+1 << " " << w-1+1 << " " << i+1+1 << " " << w-1+1 << endl;
    }
  }

  for (int i = 0; i < w-1; i++) {
    if(vv[h-1][i] % 2 == 1)
    {
      count++;
      vv[h-1][i]--;
      vv[h-1][i+1]++;
      cout << h-1+1 << " " << i+1 << " " << h-1+1 << " " << i+1+1 << endl;
    }
  }

  // for (int i = 0; i < h; i++) {
  //   for (int j = 0; j < w; j++) {
  //     cout << vv[i][j] << " ";
  //   }
  //   cout << endl;
  // }


}
