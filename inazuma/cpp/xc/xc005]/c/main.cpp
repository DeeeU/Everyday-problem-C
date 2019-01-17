#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<ll,ll> p;

int waterA, waterB, sugarA, sugarB, sugarLimit, beakerLimit;
long double maxv = -1;
int resA, resB;

void dfs()
{
  for (int i = 0; i < 41; i++)
  {
    for (int j = 0; j < 41; j++)
    {
      for (int k = 0; k < 41; k++)
      {
        for (int l = 0; l < 41; l++)
        {
          long double water = i * waterA * 100 + j * waterB * 100;
          long double sugar = k * sugarA + l * sugarB;
          if((water / 100) * sugarLimit < sugar) break;
          if(sugar + water > beakerLimit) break;
          long double rate = (sugar*100.0) / (sugar + water);
          if(rate > maxv)
          {
            resA = water + sugar;
            resB = sugar;
            maxv = rate;
          }
        }
      }
    }
  }

}

int main()
{
  cin >> waterA >> waterB >> sugarA >> sugarB >> sugarLimit >> beakerLimit;
  dfs();
  cout << resA << " " << resB << endl;



}
