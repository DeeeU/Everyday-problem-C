#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  ll n, c;
  cin >> n >> c;
  vector<p> v(n, {0, 0});
  for (int i = 0; i < n; i++){
    cin >> v[i].first >> v[i].second;
  }

  ll position = 0;
  ll addCal = 0;
  ll delCal = 0;

  ll tmp = 0;

  ll tmpA = 0;

  for (int i = 0; i < n; i++){
    if ((v[i].first - position) < v[i].second) {
      addCal += v[i].second;
      delCal += (v[i].first - position);
      position = v[i].first;
      addCal += tmpA;
      tmpA = 0;
    }else if ((position + c - v[i].first) < v[i].second) {
      tmp = 1;
      addCal += v[i].second;
      delCal += (position + c - v[i].first);
      position = v[i].first;
      for (int j = n-1; j > i; j--){
        addCal += v[j].second;
      }
      // addCal += tmpB;
      // tmpB = 0;
    }else if(tmp == 0){
      tmpA += v[i].second;
    // }else if(tmp == 1){
    //   tmpB += v[i].second;
    }
  }

  cout << addCal - delCal << endl;
  return 0;
}
