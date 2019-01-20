#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

struct unko {
  int a;
  int b;
  int diff;
};

bool cmp(const unko &a, const unko &b)
{
  // desc
  return a.diff > b.diff;
}

int main(){
  int n;
  cin >> n;
  // vector<int> a(n, 0);
  // vector<int> b(n, 0);
  vector<unko> v(n);

  ll sumA = 0;
  ll sumB = 0;
  ll res = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i].a;
    sumA += v[i].a;
  }
  ll tmp = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i].b;
    v[i].diff = v[i].a - v[i].b;
    if(v[i].a < v[i].b){
      res++;
      tmp += abs(v[i].diff);
    }
    sumB += v[i].b;
  }

  sort(all(v), cmp);

  if(sumA < sumB){
    cout << -1 << endl;
    return 0;
  }


  ll count = 0;
  for (int i = 0; i < n; i++) {
    // int a = v[i].first;
    // int b = v[i].second;
    if(tmp > count && v[i].a > v[i].b){
      count += v[i].diff;
      res++;
    }
  }

  cout << res << endl;


}
