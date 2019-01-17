#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int res = 0;
int size = 0;
string s;

void func(int num){
  for (int i = 0; i <= size - num; i++) {
    string tmp = s.substr(i, num);
    cout << tmp << endl;
    res += stoi(tmp);
    {
      if(i != 0 && i != size - num)
      {
        tmp = s.substr(i+num-1);
        res += stoi(tmp);
        cout << tmp << endl;
        tmp = s.substr(0, size-num);
        cout << tmp << endl;
        res += stoi(tmp);
      }
      else if(i == 0)
      {
        tmp = s.substr(i+num-1);
        res += stoi(tmp);
      }
      else if(i == size - num)
      {
        tmp = s.substr(0, size-num);
        res += stoi(tmp);
      }
    }
    cout << "++++++++++++++" << endl;
  }
}

int main(){
  cin >> s;
  size = int(s.size());
  for (int i = 1; i < size; i++) {
    func(i);
  }
  res += stoi(s);

  cout << res << endl;
}
