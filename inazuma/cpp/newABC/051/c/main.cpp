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
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  for(int i = 0; i < tx - sx; i++)
    cout << "R";
  for(int i = 0; i < ty - sy; i++)
    cout << "U";
  for(int i = 0; i < tx - sx; i++)
    cout << "L";
  for(int i = 0; i < ty - sy; i++)
    cout << "D";
  cout << "LU";
  for(int i = 0; i < ty - sy; i++)
    cout << "U";
  cout << "R";
  for(int i = 0; i < tx - sx; i++)
    cout << "R";
  cout << "DRD";
  for(int i = 0; i < ty - sy; i++)
    cout << "D";
  cout << "L";
  for(int i = 0; i < tx - sx; i++)
    cout << "L";
  cout << "U" << endl;
  
  

}
