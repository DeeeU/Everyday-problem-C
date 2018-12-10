#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;


int main()
{
  string n;
  cin >> n;
  char c = n[0];
  int count = 1;
  for(int i = 1; i < 4; i++)
  {
    if(c == n[i]) count++;
    else{
      count = 1;
      c = n[i];
    }
    if(count == 3){
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;

}
