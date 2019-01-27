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
  vector<string> v;
  for (int i = 0; i < size-2; i++)
  {
    string tmp = s.substr(i, 3);
    v.push_back(tmp);
  }

  int minv = INT_MAX;
  string res = "1";
  for(auto a : v){
    if(minv > abs(stoi(a) - 753))
    {
      minv = abs(stoi(a) - 753);
      res = a;
    }
  }
  cout << minv << endl;
}
