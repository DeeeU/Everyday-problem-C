#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int k, s, t;

string make(int level, string tmp)
{
  tmp = tmp.substr(0, s+t);
  if(level == 0) return tmp;
  return make(level-1, 'A'+tmp+'B'+tmp+'C');
}

int main(){
  cin >> k >> s >> t;
  string res = make(k, "").substr(s-1, t-s+1);
  cout << res << endl;

}
