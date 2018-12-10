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
  int result = 0;
  string s; int n;
  cin >> s >> n;
  int questions = 0;
  int du = 0;
  int lr = 0;

  // process
  for(int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'L') {
      lr--;
    }
    else if (s[i] == 'R') {
      lr++;
    }
    else if (s[i] == 'D') {
      du--;
    }
    else if (s[i] == 'U') {
      du++;
    }
    else
    {
      questions++;
    }
  }

  if (n == 1) {
    result = abs(lr) + abs(du) + questions;
  }
  else if(n == 2)
  {
    if (abs(lr) + abs(du) >= questions) {
      result = abs(lr) + abs(du) - questions;
    }
    else
    {
      if ((questions - (abs(lr) + abs(du))) % 2 == 0) {
        result = 0;
      }
      else
      {
        result = 1;
      }
    }
  }

  //output
  std::cout << result << '\n';
}
