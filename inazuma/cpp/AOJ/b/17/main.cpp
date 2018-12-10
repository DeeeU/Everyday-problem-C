#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  vector<string> v;
  string tmp1, tmp2;
  for (int i = 0; i < int(s1.size()); i++)
  {
    if (s1[i] != '\"')
    {
      tmp1 += s1[i];
      tmp2 += s2[i];
    }
  }
  cout << tmp1 << endl;
  return 0;
}
