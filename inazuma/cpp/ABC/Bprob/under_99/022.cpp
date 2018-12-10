#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
typedef long long ll;
using namespace std;

int main()
{
  ll n;
  cin >> n;
  ll l[n];
  ll tmp;
  ll result = 0;
  ll count[100001];

  for (ll i = 0; i < n; i++)
  {
    cin >> l[i];
  }

  for(ll i = 0; i < 100001; i++)
  {
    count[i] = 0;
  }

  for(int i = 0;i < n; i++)
  {
    count[l[i]]++;
  }

  for(ll i = 0;i < 100001; i++)
  {
    if (count[i] > 1) {
      result += (count[i] - 1);
    }
  }

  cout << result << endl;
}
