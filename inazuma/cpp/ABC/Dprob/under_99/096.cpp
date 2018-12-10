#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int n;
  int flag = 0;
  cin >> n;
  vector<int> so;
  for (int i = 3; i <= 55555; i++){
    flag = 0;
    for (int j = 2; j <= i - 1; j++){
      if (i % j == 0) {
        flag = 1;
        break;
      }
    }
    if (flag == 0 && i % 5 == 1) {
      so.push_back(i);
    }
  }

  for (int i = 0; i < n; i++){
    cout << so[i] << " ";
  }
  cout << endl;
  return 0;
}
