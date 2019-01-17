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

  int size = int(s.size());

  for (char i = 'a'; i <= 'z'; i++)
  {
    bool flag = true;
    for (int j = 0; j < size; j++)
    {
      if(s[j] == i){
        flag = false;
        break;
      }
    }
    if(flag)
    {
      cout << i << endl;
      return 0;
    }
  }
  cout << "None" << endl;

}
