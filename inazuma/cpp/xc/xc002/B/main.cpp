#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<int, int> p;


int main()
{
  // #define int long long
  int n;
  cin >> n;
  int count = 0;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  // set<int> s(v.begin(), v.end());
  // vector<int> vec2(s.begin(), s.end());
  // for(int i : vec2) cout << i << endl;

  for (int i = 0; i < int(v.size()); i++)
  {
    if(v[i] == -1 || v[v[i]-1] == -1 || v[v[v[i]-1]-1] == -1) continue;
    // cout << v[v[v[i]-1]-1] << endl;
    // cout << v[i] << endl;
    if(v[v[v[i]-1]-1] == v[i]){
      count++;
      // cout << "=--------" << endl;
      int tmp = v[i];
      v[i] = -1;
      v[tmp-1] = -1;
      // cout << v[i] << endl;
      // cout << v[tmp-1] << endl;
      // v.erase(v.begin() + i);
      // v.erase(v.begin() + v[i] - 1);
      // v[v[v[i].first-1].first-1].firs
    }
  }



  cout << count << endl;
}
