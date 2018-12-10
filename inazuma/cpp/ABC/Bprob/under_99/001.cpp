#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  double m;
  cin >> m;
  m /= 1000;
  if(m < 0.1){
    m = 0;
  }else if (m <= 5){
    m *= 10;
  }else if (m >= 6 && m <= 30){
    m += 50;
  }else if (m >= 35 && m <= 70){
    m = (m - 30) / 5 + 80;
  }else if (m > 70){
    m = 89;
  }

  if (m < 10) {
    cout << "0" << m << endl;
  }else{
    cout << m << endl;
  }
  return 0;
}
