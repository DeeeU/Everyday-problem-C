#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  vector<int> v(3,0);
  cin >> v[0] >> v[1] >> v[2];
  int d;
  cin >> d;
  if ((abs(v[1] - v[0]) <= d && abs(v[2] - v[1]) <= d) || abs(v[2] - v[0]) <= d) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
