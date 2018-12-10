#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;


int main()
{
  string s;
  cin >> s;
  int count = 0;
  int res;
  for (int i = 0; i < 20; i++)
  {
    if(s[i] == 'W' && count == 0)
    {
      count = 1;
    }
    else if (s[i] == 'W' && count == 1)
    {
      count = 2;
      res = i;
      break;
    }else{
      count = 0;
    }
  }

  cout << res << endl;
  switch (res) {
    case 1:
      cout << "Mi" << endl;
      break;
    case 2:
      cout << "Re" << endl;
      break;
    case 3:
      cout << "Re" << endl;
      break;
    case 4:
      cout << "Do" << endl;
      break;
    case 5:
      cout << "Do" << endl;
      break;
    case 6:
      cout << "Si" << endl;
      break;
    case 7:
      cout << "La" << endl;
      break;
    case 8:
      cout << "La" << endl;
      break;
    case 9:
      cout << "So" << endl;
      break;
    case 10:
      cout << "So" << endl;
      break;
    case 11:
      cout << "Fa" << endl;
      break;
    case 12:
      cout << "Fa" << endl;
      break;
    case 13:
      cout << "Mi" << endl;
      break;
  }


  return 0;
}
