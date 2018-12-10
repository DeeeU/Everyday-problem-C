#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

int countCircle = 0;
int res = 0;

vector<int> b(6, 0);
vector<int> c(6, 0);

int bestChokudai = -1;
int bestNaoko = -1;

int scoreDiff = INT_MAX;

void calc(vector<int> field){
  int chokudai = 0;
  int naoko = 0;
  print(field);

  for (int i = 0; i < 6; i++) {
    if(field[i] == field[i+3]) {
      chokudai += b[i];
    }else{
      naoko += b[i];
    }
  }

  int cCount = 0;
  for (int i = 0; i < 8; i++) {
    if(i % 3 == 2) continue;
    if(field[i] == field[i+1]){
      chokudai += c[cCount];
    }else{
      naoko += c[cCount];
    }
    cCount++;
  }

  if(scoreDiff > abs(chokudai - naoko)){
    scoreDiff = abs(chokudai - naoko);
    bestChokudai = chokudai;
    bestNaoko = naoko;
  }
}

void dfs(vector<int> field, int step, int countCircle){
  if(step == 9){
    calc(field);
    return;
  }

  if(countCircle < 5) {
    field[step] = 1;
    // countCircle++;
    dfs(field, step+1, countCircle+1);
  }
  if(step - countCircle < 4){
    field[step] = -1;
    dfs(field, step+1, countCircle);
  }
}



int main(){
  vector<int> field(9, 0);

  for (int i = 0; i < 6; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < 6; i++) {
      cin >> c[i];
  }

  dfs(field, 0, 0);

  cout << bestChokudai << endl;
  cout << bestNaoko << endl;
}
