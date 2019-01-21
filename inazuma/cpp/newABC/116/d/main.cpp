#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int n, k;
vector<p> v;
ll dsum = 0;
ll ksum = 0;
ll res = 0;
map<int, int> ate;

void countKsum(){
  for(auto a : ate){
    ksum += (a.second > 0);
  }
}

int main(){
  vector<p> tmp;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int d, k;
    cin >> k >> d;
    v.push_back({d, k});
  }
  sort(rall(v));

  for (int i = 0; i < k; i++) {
    ate[v[i].second]++;
    dsum += v[i].first;
    if(ate[v[i].second] >= 2) tmp.push_back(v[i]);
  }
  sort(all(tmp));
  countKsum();
  res = ksum * ksum + dsum;

  for (int i = k; i < n; i++) {
    int tmpSize = int(tmp.size());
    if(tmpSize == 0) break;
    if(ate[v[i].second] == 0){
      ate[v[i].second]++;
      dsum += v[i].first - tmp[0].first;
      ksum++;
      res = max(res, ksum * ksum + dsum);
      tmp.erase(tmp.begin() + 0);
    }
  }

  cout << res << endl;
}
