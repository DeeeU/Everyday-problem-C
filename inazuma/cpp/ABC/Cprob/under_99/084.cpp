#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;


int main()
{
  int N;
  cin >> N;
  vector<int> c(N, 0);
  vector<int> s(N, 0);
  vector<int> f(N, 0);

  for (int i = 0; i < N - 1; i++){
    cin >> c[i] >> s[i] >> f[i];
  }

  for (int i = 0; i < N - 1; i++)
  {
    int now = s[i] + c[i];
    for (int j = i + 1; j < N - 1; j++){
      if (now <= s[j]) {
        now = s[j];
      }else{
        now = ceil((now - s[j]) / double(f[j])) * f[j] + s[j];
      }
      now += c[j];
    }
    cout << now << endl;
  }


  cout << 0 << endl;
  return 0;
}
