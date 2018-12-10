#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  int h, w;
  cin >> h >> w;

  vector<string> v(h, "@");
  for(int i = 0; i < h; i++)
  {
    cin >> v[i];
    v[i] = "#" + v[i] + "#";
  }

  for(int i = 0; i < w + 2; i++){
    cout << "#";
  }
  cout << endl;

  for(int i = 0; i < h; i++)
  {
    cout << v[i] << endl;
  }

  for(int i = 0; i < w + 2; i++){
    cout << "#";
  }
  cout << endl;
  
}
