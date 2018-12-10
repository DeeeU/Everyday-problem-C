#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n;
  string s;
  cin >> n >> s;
  vector<string> v(n, "a");
  for (int i = 0; i < n; i++)
  {
    v[i] = s[i];
  }
  // set<string> se(v.begin(), v.end());
  // vector<string> vec2(se.begin(), se.end());
  int maxv = 0, count = 0;
  bool isAdd = true;
  for (int i = 0; i < n-1; i++)
  {
    vector<string> tmp;
    vector<string> done;
    for (int j = 0; j <= i; j++)
    {
      tmp.push_back(v[j]);
    }
    for (int j = i+1; j < n; j++)
    {
      for(string hoge : tmp){
        for (string d : done)
        {
          if (d == v[j])
          {
            isAdd = false;
          }
        }
        if (hoge == v[j] && isAdd)
        {
          count++;
          done.push_back(hoge);
        }
        isAdd = true;
      }
      set<string> se(done.begin(), done.end());
      maxv = max(maxv, int(se.size()));
      count = 0;
      isAdd = true;
    }
    // for(string d : done) cout << d << endl;
    // cout << "========================" << endl;
  }

  cout << maxv << endl;

  return 0;
}
