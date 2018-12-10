#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

string zero(int ken, int ban){
  int kens = int(log10(ken));
  int bans = int(log10(ban));
  string s = "";
  for (int i = 0; i < 5 - kens; i++)
  {
    s += "0";
  }
  s += to_string(ken);
  for (int i = 0; i < 5 - bans; i++)
  {
    s += "0";
  }
  s += to_string(ban);
  return s;
}

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>());
  vector<vector<int>> tmp(n, vector<int>());
  map<int, string> mp;
  vector<int> zyunban(m, 0);
  for (int i = 0; i < m; i++)
  {
    int place;
    cin >> place;
    int gomi;
    cin >> gomi;
    zyunban[i] = gomi;
    v[place-1].push_back(gomi);
    tmp[place-1].push_back(gomi);
  }

  for (int i = 0; i < n; i++) {
    sort(all(tmp[i]));
  }

  for(int i = 0; i < n; i++){
    for(auto b : v[i]){
      auto it = lower_bound(tmp[i].begin(), tmp[i].end(), b);
      // zero(i+1, it-tmp[i].begin()+1);
      mp[b] = zero(i+1, it-tmp[i].begin()+1);
      // cout << setfill('0') << right  << setw(6) << i;
      // cout << setfill('0') << right  << setw(6) << it-tmp[i].begin() << endl;
    }
  }

  for(auto a : zyunban) cout << mp[a] << endl;


}
