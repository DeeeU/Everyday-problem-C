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
  string s;
  cin >> s;
  vector<int> v;
  int size = int(s.size());
  ll res = 0;

  // // while(true) {
  // //   bool flag = true;
  // for (int i = 0; i < size - 1; i++)
  // {
  //   if(s[i] == 'B' && s[i+1] == 'W')
  //   {
  //     // flag = false;
  //     res++;
  //     s[i] = 'W';
  //     s[i+1] = 'B';
  //   }
  // }
  // cout << s << endl;
  // // if(flag) break;
  // // }
  //
  // // while(true) {
  // //   bool flag = true;
  // for (int i = size-1; i > 0; i--)
  // {
  //   if(s[i] == 'W' && s[i-1] == 'B')
  //   {
  //     // flag = false;
  //     res++;
  //     s[i] = 'B';
  //     s[i-1] = 'W';
  //   }
  // }
  // cout << s << endl;
  // // cout << s << endl;
  // // if(flag) break;
  // // }

  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if(s[i] == 'W') v.push_back(i);
  }

  for (int i = 0; i < int(v.size()); i++)
  {
    res += v[i] - count;
    count++;
  }

  cout << res << endl;
}
