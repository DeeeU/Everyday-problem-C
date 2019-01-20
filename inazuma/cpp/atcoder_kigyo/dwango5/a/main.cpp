#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int main(){

  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  vector<int> sum(n+1);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    sum[i+1] = sum[i] + v[i];
    // string s = tmp.to_string();
    // for (int i = 0; i < 10; i++) {
    //   if(s[i] == '1') count++;
    // }

    // if(count > maxv1){
    //   maxv2 = maxv1;
    //   maxv1 = count;
    // }else if(maxv2 < count){
    //   maxv2 = count;
    // }
  }


  vector<string> andRes;
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n+1; j++) {
      auto tmp = bitset<100>(sum[j] - sum[i]);
      andRes.push_back(tmp.to_string());
    }
  }
  sort(rall(andRes));

  int res = -1;
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < int(andRes.size())-1; j++) {
      string tmp = "@";
      if(andRes[j][i] == '1') tmp = andRes[j];
      for (int k = j+1; k < int(andRes.size()); k++) {
        if(tmp == "@") break;
        if(andRes[k][i] == '1'){
          int a = stoi(tmp, nullptr, 2);
          int b = stoi(andRes[k], nullptr, 2);
          res = max(res, a & b);
          cout << res << endl;
          cout << tmp << " : " << andRes[k] << endl;
        }
      }
      if(res != -1){
        cout << res << endl;
        return 0;
      }
    }
  }
}
