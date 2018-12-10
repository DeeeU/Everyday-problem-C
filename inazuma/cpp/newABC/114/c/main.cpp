#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int n;

int res = 0;

void dfs(string pos)
{
  if(stoll(pos) > n) return;
  bool three = false, five = false, seven = false;
  for (int i = 0; i < int(pos.size()); i++)
  {
    if(pos[i] == '3') three = true;
    if(pos[i] == '5') five = true;
    if(pos[i] == '7') seven = true;
  }
  if(three && five && seven) res++;
  dfs(pos + "3");
  dfs(pos + "5");
  dfs(pos + "7");
}

int main(){
  cin >> n;
  dfs("3");
  dfs("5");
  dfs("7");
  cout << res << endl;


}
