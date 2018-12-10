#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  string s;
  int k;
  cin >> s >> k;
  vector<string> v;
  // int count = 0;
  for (int i = 1; i <= 5; i++){
    for (int j = 0; j < int(s.size()); j++){
      v.push_back(s.substr(j, i));
    }
  }
  set<string> tmp(v.begin(), v.end());
  vector<string> v2(tmp.begin(), tmp.end());
  sort(v2.begin(), v2.end());
  // for(string a : v2) cout << a << endl;
  cout << v2[k - 1] << endl;
  return 0;
}
