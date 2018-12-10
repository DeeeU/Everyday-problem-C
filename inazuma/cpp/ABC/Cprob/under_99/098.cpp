#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n;
  string s;
  cin >> n >> s;
  int countW = 0, countE = 0;
  vector<int> tmpE;
  vector<int> tmpW;
  for (int i = 1; i < n; i++)
  {
    if (s[i-1] == 'W')
    {
      countW++;
    }
    tmpW.push_back(countW);
  }
  // for(int i : tmpW) cout << i << endl;
  // cout << "=============-" << endl;

  for (int i = n-2; i >= 0; i--)
  {
    if (s[i+1] == 'E')
    {
      countE++;
    }
    tmpE.push_back(countE);
  }
  // for(int i : tmpE) cout << i << endl;

  int minv = min(tmpW[n-2], tmpE[n-2]);
  // cout << minv << endl;
  for (int i = 0; i < n-2; i++)
  {
    minv = min(minv, tmpE[i] + tmpW[n-3-i]);
    // cout << "=======================================" << endl;
    // cout << minv << endl;
  }
  cout << minv << endl;
  return 0;
}
