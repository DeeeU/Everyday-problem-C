#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 1; i <= pow(10,8); i++){
    int tmp = a * i;
    if (tmp % b == c) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
