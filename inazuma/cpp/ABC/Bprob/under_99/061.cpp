#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main(void)
{
  int n, m;
  cin >> n >> m;
  vector<int> a(m, 0);
  vector<int> b(m, 0);
  vector<int> count(n, 0);
  for (int i = 0; i < m; i++){
    cin >> a[i] >> b[i];
    count[a[i]-1]++;
    count[b[i]-1]++;
  }

  for(int i: count){
    cout << i << endl;
  }


  return 0;
}
