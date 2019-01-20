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
  bool one = false, nine = false, seven = false, four = false;
  int n1, n2, n3, n4;
  cin >> n1 >> n2 >> n3 >> n4;

  switch (n1) {
    case 1:
      one = true;
      break;
    case 9:
      nine = true;
      break;
    case 7:
      seven = true;
      break;
    case 4:
      four = true;
      break;
  }

  switch (n2) {
    case 1:
      one = true;
      break;
    case 9:
      nine = true;
      break;
    case 7:
      seven = true;
      break;
    case 4:
      four = true;
      break;
  }

  switch (n3) {
    case 1:
      one = true;
      break;
    case 9:
      nine = true;
      break;
    case 7:
      seven = true;
      break;
    case 4:
      four = true;
      break;
  }

  switch (n4) {
    case 1:
      one = true;
      break;
    case 9:
      nine = true;
      break;
    case 7:
      seven = true;
      break;
    case 4:
      four = true;
      break;
  }

  if(one && nine && seven && four)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
