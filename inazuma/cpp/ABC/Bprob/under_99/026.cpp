#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <vector>
#include <string>
#include <set>
typedef long long ll;
using namespace std;

int main()
{
  // input
  long double pi = 3.14159265258979;
  double n,tmp;
  cin >> n;
  vector<double> v;
  long double result = 0;
  for(double i = 0; i < n; i++)
  {
    cin >> tmp;
    v.push_back(tmp);
  }
  // process
  sort(v.begin(),v.end());
  for(int i = n-1;i > -1; i-=2)
  {
    result += (v[i]) * (v[i]);
    result -= (v[i-1]) * (v[i-1]);
  }

  result *= pi;


  // output
  printf("%Lf\n",result );

}
