using namespace std;

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <climits>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <numeric>
typedef long long ll;
typedef pair<int,int> p;

int main()
{
  string s;
  cin >> s;
  vector<string> wordList = {"dream", "dreamer", "erase", "eraser"};
  reverse(s.begin(), s.end());
  for (int i = 0; i < 4; i++){
    reverse(wordList[i].begin(), wordList[i].end());
  }

  bool can = true;
  for (int i = 0; i < int(s.size()); ){
    bool can2 = false;
    for (int j = 0; j < 4; ++j){
      string d = wordList[i];
      if (s.substr(i, int(d.size())) == d) {
        can2 = true;
        i += int(d.size());
      }
    }
    if (!can2) {
      can = false;
      break;
    }
  }


  if (can) {
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
