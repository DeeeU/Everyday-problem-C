#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<ll, ll> p;

struct dish {
  ll a;
  ll b;
  ll sum;
  ll index;
};

void printstr(vector<dish> v)
{
  for(auto A : v){
    cout << A.a << endl;
    cout << A.b << endl;
    cout << A.sum << endl;
    cout << A.index << endl;
    cout << "=====" << endl;
  }
}

// 照準
bool cmp(const dish &a, const dish &b)
{
    return a.sum < b.sum;
}

int main(){
  ll n;
  cin >> n;
  vector<dish> v(n);
  map<ll, bool> ate;
  for (ll i = 0; i < n; i++) {
    ll tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    v[i].a = tmp1;
    v[i].b = tmp2;
    v[i].sum = tmp1 + tmp2;
    v[i].index = i;
    ate[i] = false;
  }
  sort(rall(v), cmp);
  ll sumA = 0, sumB = 0;
  // printstr(v);

  for (ll i = 0; i < n; i++) {
    if(i % 2 == 0){
      sumA += v[i].a;
    }else{
      sumB += v[i].b;
    }
    ate[i] = true;
  }

  cout << sumA - sumB << endl;
}
