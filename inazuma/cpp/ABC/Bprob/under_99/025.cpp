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
  int n,minv,maxv;
  cin >> n >> minv >> maxv ;
  string direct; int distance;
  int result = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> direct >> distance;
    if (direct[0] == 'E') {
      if (distance < minv) {
        result += minv;
      }
      else if (distance > maxv) {
        result += maxv;
      }
      else
      {
        result += distance;
      }
    }
    else {
      if (distance < minv) {
      result -= minv;
      }
      else if (distance > maxv) {
      result -= maxv;
      }
      else
      {
      result -= distance;
      }
    }
  }
  // process


  //output
  if (result == 0) {
    std::cout << '0' << '\n';
  }
  else if (result > 0) {
    std::cout << "East " << result << '\n';
  }
  else
  {
    std::cout << "West " << abs(result) <<  '\n';
  }
}
