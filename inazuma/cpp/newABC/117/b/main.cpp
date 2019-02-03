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
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(rall(v));
  int longest = v[0];
  int sum = 0;

  for (int i = 1; i < n; i++) {
    sum += v[i];
  }

  if(longest < sum){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

}
