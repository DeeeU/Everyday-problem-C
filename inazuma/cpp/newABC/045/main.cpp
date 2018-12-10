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
  map<string, string> mp;
  cin >> mp["a"] >> mp["b"] >> mp["c"];
  string now = "a";
  while(true)
  {
    if(int(mp[now].size()) == 0)
    {
      if(now == "a") cout << "A" << endl;
      if(now == "b") cout << "B" << endl;
      if(now == "c") cout << "C" << endl;
      return 0;
    }
    char tmp = mp[now][0];
    mp[now] = mp[now].substr(1);
    now = tmp;
  }


}
