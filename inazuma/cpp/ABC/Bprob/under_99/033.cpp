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
  string result = "atcoder";
  int n;
  cin >> n;
  std::vector<string> name;
  std::vector<int> population;
  string tmps; int tmpi;
  ll sum = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> tmps >> tmpi;
    name.push_back(tmps);
    population.push_back(tmpi);
    sum += tmpi;
  }

  // process
  for(int i = 0; i < n; i++)
  {
    if (population[i] > sum / 2) {
      result = name[i];
    }
  }


  //output
  std::cout << result << '\n';
}
