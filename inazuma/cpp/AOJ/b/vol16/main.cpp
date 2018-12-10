#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;


int main()
{
  while(true)
  {
    int n;
    cin >> n;
    if(n == 0) return 0;
    int nn = n;
    vector<string> v(n, "aaaa00");
    map<string, int> count;

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    // vector<string> vTmp = v;
    set<string> s(v.begin(), v.end());
    vector<string> tmp(s.begin(), s.end());

    for(string hoge : tmp)
    {
      count[hoge] = 0;
    }

    int maxv = 0;
    int secv = 0;
    string ans = "aa";

    // map<string, int> mp = count;
    // for (int i = 0; i < nn; i++){
    //   mp[v[i]]++;
    //   for(auto a : mp)
    //   {
    //     if(maxv < a.second)
    //     {
    //       maxv = a.second;
    //       ans = a.first;
    //     }
    //     if(a.first != ans && secv < a.second)
    //     {
    //       secv = a.second;
    //     }
    //   }
    // }
    // cout << maxv << endl;
    // cout << secv << endl;
    // if(maxv == secv)
    // {
    //   cout << "TIE" << endl;
    //   continue;
    // }

    maxv = 0;
    secv = 0;
    for (int i = 0; i < nn; i++){
      count[v[i]]++;
      // cout << count["B"] << endl;
      n--;
      for(auto a : count)
      {
        if(maxv < a.second)
        {
          maxv = a.second;
          ans = a.first;
        }
        if(a.first != ans && secv < a.second)
        {
          secv = a.second;
        }
      }
      // cout << maxv << endl;
      // cout << secv << endl;
      if (maxv > secv + n) {
        cout << ans << " " << nn - n << endl;
        break;
      }
    }
    if(maxv == secv)
    {
      cout << "TIE" << endl;
      continue;
    }

  }
  // for(auto i : count) cout << i.first << " : " << i.second << endl;
  // cout << "TIE" << endl;
}
