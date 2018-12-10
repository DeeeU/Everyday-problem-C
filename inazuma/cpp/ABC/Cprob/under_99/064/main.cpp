#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  // #define int long long

  int n;
  cin >> n;
  vector<int> v(n, 0);
  vector<int> rate;
  int over = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(v[i] < 3200) rate.push_back(v[i] / 400);
    else over++;
  }
  set<int> s(rate.begin(), rate.end());
  vector<int> v2(s.begin(), s.end());
  sort(all(v2));

  int count = 0;
  for(int i : v2) count++;
  // if(count == 0) cout << 1 << " ";
  // else cout << count << " ";
  cout << max(count, 1) << " ";

  // cout << over << endl;


  for (int i = 0; i < over; i++)
  {
    count++;
  }

  cout << count << endl;
}
