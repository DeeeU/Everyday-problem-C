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
  // input & pre
  string s;
  cin >> s;
  std::vector<int> v(6,0);
  // int result = 0;

  // process
  for(int i = 0; i < s.size(); i++ )
  {
    if (s[i] == 'A') {
      v[0]++;
    }
    else if (s[i] == 'B') {
      v[1]++;
    }
    else if (s[i] == 'C') {
      v[2]++;
    }
    else if (s[i] == 'D') {
      v[3]++;
    }
    else if (s[i] == 'E') {
      v[4]++;
    }
    else if (s[i] == 'F') {
      v[5]++;
    }
  }

  //output
  for(int i = 0;i < 5; i++)
  {
    std::cout << v[i] << ' ';
  }
  std::cout << v[5] << endl; 
}
