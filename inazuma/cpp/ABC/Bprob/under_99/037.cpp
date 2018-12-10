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
  int result = 0;
  int n,plays;
  cin >> n >> plays;
  std::vector<int> nums(n,0);
  int begin,end,change;
  for(int i = 0; i < plays; i++)
  {
    cin >> begin >> end >> change;
    for(int j = begin-1; j < end; j++)
    {
      nums[j] = change;
    }
  }

  // process


  //output
  for(int i = 0; i < n; i++)
  {
    cout << nums[i] << endl;
  }
}
