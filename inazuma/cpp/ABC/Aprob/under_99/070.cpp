#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  string n;
  cin >> n;
  for (int i = 0; i <= int(n.size()) / 2; i++){
    if (n[i] != n[int(n.size()) - 1 - i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
