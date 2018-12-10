#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
typedef long long ll;
using namespace std;

int main()
{
  int n,t,tmp;
  cin >> n >> t;
  int result = t;
  vector<int> v;

  for(int i = 0; i < n; i++)
  {
    cin >> tmp;
    v.push_back(tmp);
  }


  for(int i = 0;i < n-1; i++)
  {
    if (t > v[i+1] - v[i]) {
      result += (v[i+1] - v[i]);
    }
    else result += t;
    // {
    // }
  }
  cout << result << endl;

}
