#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int a, b;
  cin >> a >> b;
  int count = 0;
  for (int i = 1; i <= b - a; i++){
    count += i;
  }
  cout << count - b << endl;
}
