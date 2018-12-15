#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<int,int> p;

map<int, pair<int, double>> mp;
vector<pair<double, int>> v;

int main(){
  int d, g;
  cin >> d >> g;
  for (int i = 0; i < d; i++)
  {
    int tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    mp[i] = {tmp1, (tmp2 / tmp1) + (i+1) * 100 * tmp1};
    v.push_back({(tmp2 / tmp1) + (i+1) * 100 * tmp1, tmp1});
    // v.push_back({(tmp2 / tmp1) + (i+1) * 100 * tmp1, tmp2 + (i+1) * 100 * tmp1});
  }
  sort(rall(v));
  int res = 0;

  for (int i = d-1; i >= 0; i--) {

    if(v[i].second > g) break;
    int num =
    g -= v[i].second;


  }



}
