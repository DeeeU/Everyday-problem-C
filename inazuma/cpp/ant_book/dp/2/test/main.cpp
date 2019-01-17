#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;
vector<int> vv;
vector<int> wv;


struct tmp{
  long double ave;
  int weight;
  int val;

};

bool cmp(const tmp &a, const tmp &b){
  return a.ave > b.ave;
}

int main(){
  int n, w;
  cin >> n >> w;
  vector<tmp> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i].val >> v[i].weight;
    v[i].ave = double(v[i].val) / double(v[i].weight);
  }

  sort(all(v), cmp);

  int res = 0;
  for(tmp i : v){
    if(w <= 0) break;
    int used = w / i.weight;
    res += used * i.val;
    w -= used * i.val;

  }
  cout << "===========" << endl;

  cout << res << endl;


}
