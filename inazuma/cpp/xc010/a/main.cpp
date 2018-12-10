using namespace std;
#include <bits/stdc++.h>

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
  for (int i = 0; i < 300; i++)
  {
    s = s.substr(0, int(s.size()) - 1);
    if(int(s.size()) % 2 == 1) continue;
    string s1 = s.substr(0, int(s.size()) / 2);
    string s2 = s.substr(int(s.size()) / 2);
    if(s1 == s2)
    {
      cout << s.size() << endl;
      return 0;
    }

  }

}
