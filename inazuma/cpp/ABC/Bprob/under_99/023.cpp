#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
typedef long long ll;
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;
  int judge = 0;


  if ((n - 3) % 6 == 0) {
    for(int i = 0;i < n; i++){
      if ((i % 3 == 0 && s[i] == 'a')||(i % 3 == 1 && s[i] == 'b')||(i % 3 == 2 && s[i] == 'c') ) {
        judge++;
      }
    }
  }

  else if((n - 5) % 6 == 0){
    if (s[0] == 'c') {
      judge++;
    }
    if (s[n-1] == 'a') {
      judge++;
    }
    for(int i = 1;i < n-1; i++){
      if ((i % 3 == 1 && s[i] == 'a')||(i % 3 == 2 && s[i] == 'b')||(i % 3 == 0 && s[i] == 'c')
    && (i > 0 && i < n) ) {
        judge++;
      }
    }
  }
  else if((n - 7) % 6 == 0){
    if (s[0] == 'b') {
      judge++;
    }
    if (s[1] == 'c') {
      judge++;
    }
    if (s[n-2] == 'a') {
      judge++;
    }
    if (s[n-1] == 'b') {
      judge++;
    }
    for(int i = 2;i < n-2; i++){
      if ((i % 3 == 2 && s[i] == 'a')||(i % 3 == 0 && s[i] == 'b')||(i % 3 == 1 && s[i] == 'c')
    && (i > 0 && i < n) ) {
        judge++;
      }
    }
  }

  if (judge == n) {
    cout << (judge-1) / 2 << endl;
  }
  else if (n == 1 && s == "b") {
    cout << "0" << endl;
  }
  else
  {
    cout << "-1" << endl;
  }
}
