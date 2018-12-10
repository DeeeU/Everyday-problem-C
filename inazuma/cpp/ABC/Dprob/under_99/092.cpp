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
  int a, b;
  cin >> a >> b;
  int whiteNum = 1;
  int blackNum = 1;
  vector<char> white(100, '#');
  vector<char> black(100, '.');

  cout << 100 << ' ' << 100 << endl;

  for (int i = 1; i < 50; i += 2){
    for (int i = 0; i < 100; i++) cout << '#';
    cout << endl;
    vector<char> white(100, '#');
    for (int j = 1; j < 100; j += 2){
      if (whiteNum < a) {
        white[j] = '.';
        whiteNum++;
      }
    }
    for(char c : white) cout << c;
    cout << endl;
  }

  for (int i = 1; i < 50; i += 2){
    for (int i = 0; i < 100; i++) cout << '.';
    cout << endl;
    vector<char> black(100, '.');
    for (int j = 1; j < 100; j += 2){
      if (blackNum < b) {
        black[j] = '#';
        blackNum++;
      }
    }
    for(char c : black) cout << c;
    cout << endl;
  }
  return 0;
}
