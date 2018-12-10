#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  string s, t;
  cin >> s >> t;

  map<char, vector<int>> mps;
  map<char, vector<int>> mpt;



  for (int i = 0; i < int(s.size()); i++) {
    mps[s[i]].push_back(i);
    mpt[t[i]].push_back(i);
  }


  for(auto a : mps)
  {
    bool flag = false;
    for(auto b : mpt)
    {
      if(a.second == b.second)
      {
        flag = true;
        break;
      }
    }
    if(!flag)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
