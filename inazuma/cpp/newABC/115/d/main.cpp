#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;
ll n, x;

string make_burger(string burger, int level){
  return (level == n) ? burger : make_burger("B"+burger+"P"+burger+"B");
  // if(level == n) return burger;
  // burger = "B" + burger + "P" + burger + "B";
  // return make_burger(burger, level+1);
}


int main(){
  cin >> n >> x;
  string res = make_burger("P", 0);
  int count = 0;
  for (int i = 0; i < x; i++) {
    count += (res[i] == 'P');
  }
  cout << count << endl;

}
