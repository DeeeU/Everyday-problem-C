#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> v = {a, b, c};
  int res = 0;
  while(true) {
    sort(v.begin(), v.end());
    // cout << v[0] << ":" << v[1] << ":" << v[2] << endl;
    if (v[0] == v[1] && v[0] == v[2]) {
      cout << res << endl;
      return 0;
    }
    if (v[0] != v[1]) {
      v[0] += 2;
      res++;
    }else if (v[0] == v[1] && v[1] != v[2]){
      v[0]++;
      v[1]++;
      res++;
    }
    if(v[0] == v[1] && (v[0] + 1 == v[2])){
      res++;
      cout << res << endl;
      return 0;
    }
  }


  return 0;
}
