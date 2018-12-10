#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n;
  cin >> n;
  vector<ll> v(n, 0);
  for (int i = 0; i < n; i++){
    cin >> v[i];
  }
  int count = 1;
  int res = 0;

  vector<ll> sum(n+1,0);

  for (int i = 1; i < n+1; i++){
    sum[i] = sum[i-1] + v[i-1];
  }

  sort(sum.begin(), sum.end());

  // for(ll i : sum) cout << i << endl;

  for (int i = 0; i < n; i++){
    if (sum[i] != sum[i+1]) {
      res += ((count * (count-1)) / 2);
      count = 1;
    }else{
      count++;
    }
  }
  res += ((count * (count-1)) / 2);



  cout << res << endl;

  return 0;
}
