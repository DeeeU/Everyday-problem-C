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
  int n;
  cin >> n;
  vector<int> v(n, 0);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  sort(all(v));

  vector<ll> powTwo;
  for (int i = 1; i < 36; i++)
  {
    powTwo.push_back(pow(2, i));
  }

  int res = 0;

  for (int i = 34; i >= 0; i--)
  {
    for (int j = 0; j < n; j++)
    {
      if(n == 0 || j < 0) {
        cout << res << endl;
        return 0;
      }
      // cout << "pow: " << powTwo[i] << endl;
      // cout << "v: " << v[j] << endl;
      ll tmp = powTwo[i] - v[j];
      // if(res == 1) cout << "ya" << endl;
      if (tmp < 1) continue;
      vector<int> hoge = v;
      hoge.erase(hoge.begin() + j);

      auto av = *lower_bound(hoge.begin(), hoge.end(), tmp);
      // cout << av << endl;
      if(av != tmp) continue;
      else{
        v.erase(v.begin() + j);
        auto b = lower_bound(v.begin(), v.end(), av) - v.begin();
        v.erase(v.begin() + b);
        res++;
        n -= 2;
        j -= 2;
        if(j > 0) j = 0;
      }
    }
  }

  cout << res << endl;

}
