#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int a, b;
  cin >> a >> b;
  cout << max({a+b, a-b, a*b}) << endl;
  return 0;
}
