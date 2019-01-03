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
  int res = 0;
  cin >> n;
  n = 1000 - n;

  while(n > 0) {
    if(n >= 500){
      n -= 500;
      res++;
    }
    else if(n >= 100){
      n -= 100;
      res++;
    }
    else if(n >= 50){
      n -= 50;
      res++;
    }
    else if(n >= 10){
      n -= 10;
      res++;
    }
    else if(n >= 5){
      n -= 5;
      res++;
    }
    else if(n >= 1){
      n--;
      res++;
    }
  }

  cout << res << endl;

}
