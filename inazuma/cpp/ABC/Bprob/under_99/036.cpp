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
  // input & declare
  int n;
  cin >> n;
  std::vector<string> v;
  string tmp;
  for(int i = 0; i < n; i++)
  {
    cin >> tmp;
    v.push_back(tmp);
  }

  // process
  // for(int i = 0; i < n / 2)


  //output
  for(int i = 0; i < n; i++)
  {
    for(int j = n-1; j > -1; j--)
    {
      cout << (v[j])[i];
    }
    cout << endl;
  }
}
